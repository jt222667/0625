%% 1. 主函数
function result = solve_MOEA_robot(opts)
% 采用 MATLAB gamultiobj 对模块化机器人多目标问题进行求解

if nargin < 1
    opts = struct();
end

% ---------- 可配置参数 ----------
if ~isfield(opts,'tar') || isempty(opts.tar)
    tar.POS_e = [2 0 2]';
    tar.ORI_e = cy(pi/2);
else
    tar = opts.tar;
end
if ~isfield(opts,'PopulationSize'), opts.PopulationSize = 10; end
if ~isfield(opts,'MaxGenerations'), opts.MaxGenerations = 10; end
if ~isfield(opts,'UseParallel'),    opts.UseParallel = true; end
if ~isfield(opts,'Penalty'),        opts.Penalty = 1e6; end

RP_data = Module_Lib();

nvars = 22; 
lb = [3,    ones(1,7), ones(1,7),    zeros(1,7)];
ub = [7, 10*ones(1,7), ones(1,7),   2*ones(1,7)];
IntCon = 1:nvars;

% 目标函数: 全部转成最小化 [-w_goal, sig_goal, num_goal]
obj = @(x)evaluate_one(x,RP_data,tar,opts.Penalty);

gaOpts = optimoptions('gamultiobj', ...
    'PopulationSize', opts.PopulationSize, ...
    'MaxGenerations', opts.MaxGenerations, ...
    'UseParallel', opts.UseParallel, ...
    'Display', 'iter', ...
    'CreationFcn', @(GenomeLength,FitnessFcn,options) creation_valid(GenomeLength,FitnessFcn,options,RP_data), ...
    'MutationFcn', @(parents,options,GenomeLength,FitnessFcn,state,thisScore,thisPopulation) ...
    mutation_valid(parents,options,GenomeLength,FitnessFcn,state,thisScore,thisPopulation,RP_data), ...
    'CrossoverFcn', @(parents,options,GenomeLength,FitnessFcn,unused,thisPopulation) ...
    crossover_valid(parents,options,GenomeLength,FitnessFcn,unused,thisPopulation,RP_data), ...
    'FunctionTolerance', 1e-3);

[x,fval,exitflag,output,population,scores] = gamultiobj(obj,nvars,[],[],[],[],lb,ub,[],IntCon,gaOpts);

result.x = x;
result.fval = fval;
result.exitflag = exitflag;
result.output = output;
result.population = population;
result.scores = scores;
result.tar = tar;

end

%% 2. 分解x
function [n,module_raw,install_raw,align_raw] = decode_x(x)
n = round(x(1));
module_raw   = round(x(2:8));
install_raw  = round(x(9:15));
align_raw    = round(x(16:22));
end

%% 2. 个体评估函数
function f = evaluate_one(x,RP_data,tar,penalty)

% 解码
[n,module_raw,install_raw,align_raw] = decode_x(x);

sequence_raw = 0:6;

% 合法性校验
[module_out, install_out, align_out, sequence_out, num_exp, is_valid, ~] = expand_module_units(module_raw(1:n),install_raw(1:n),align_raw(1:n),sequence_raw(1:n),RP_data);
if ~is_valid
    f = [penalty, penalty, penalty];
    return;
end

% 计算目标值
try
    LP = LP_generate(module_out, install_out, align_out, sequence_out,RP_data);
    SV = SV_generate(LP);
    Goal = Goal_init(SV);
    Goal.change = [1 0 0];
    Goal.POS_e{1} = tar.POS_e;
    Goal.ORI_e{1} = tar.ORI_e;
    [SV_goal, flag_goal, ~, w_goal] = SQP_all(LP,SV,Goal);
    if flag_goal ~= 0
        f = [penalty, penalty, penalty];
        return;
    end
    sig_goal = calc_sig_worst_all(SV_goal,LP);
    num_goal = num_exp + n;
    f = [-w_goal, sig_goal, num_goal];
catch
    f = [penalty, penalty, penalty];
end

end


%% 3. 生成种群
function pop = creation_valid(GenomeLength,~,options,RP_data)
N = options.PopulationSize;
pop = zeros(N,GenomeLength);
for i = 1:N
    [n,mo,is,al,~] = generate_valid_config_x(RP_data);
    pop(i,:) = [n,mo,is,al];
end
end

%% 6. 修复非法决策向量的专用函数
function x = repair_x(x,RP_data)
[n,mo,is,al] = decode_x(x);
if n < 3 || n > 7 || any(mo(1:n) < 1) || any(mo(1:n) > 10)
    [n,mo,is,al,~] = generate_valid_config_x(RP_data);
end
is = min(max(round(is),1),1);
al = min(max(round(al),0),2);
x = [n,round(mo),round(is),round(al)];
end



%% 4. 自定义的变异算子 options保留签名
function mutationChildren = mutation_valid(parents,options,GenomeLength,~,~,~,thisPopulation,RP_data)
mutationChildren = zeros(length(parents),GenomeLength);
for i = 1:length(parents)
    base = thisPopulation(parents(i),:);
    child = base;
    if rand < 0.25
        [n,mo,is,al,~] = generate_valid_config_x(RP_data);
        child = [n,mo,is,al];
    else
        idx = randi(8); % 只轻微扰动 n + module_raw
        if idx == 1
            child(1) = randi([3 7]);
        else
            child(idx) = randi([1 10]);
        end
    end
    mutationChildren(i,:) = repair_x(child,RP_data);
end
end

%% 5. 自定义的交叉算子 options保留签名
function xoverKids = crossover_valid(parents,options,GenomeLength,~,~,thisPopulation,RP_data)
nKids = length(parents);
xoverKids = zeros(nKids,GenomeLength);
for i = 1:2:nKids-1
    p1 = thisPopulation(parents(i),:);
    p2 = thisPopulation(parents(i+1),:);
    cp = randi([2,GenomeLength-1]);
    c1 = [p1(1:cp), p2(cp+1:end)];
    c2 = [p2(1:cp), p1(cp+1:end)];
    xoverKids(i,:)   = repair_x(c1,RP_data);
    xoverKids(i+1,:) = repair_x(c2,RP_data);
end
% 奇数情况
if mod(nKids,2)==1
    xoverKids(end,:) = thisPopulation(parents(end),:);
end
end
