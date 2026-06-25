function result_final = merge_pareto_incremental_2(result_final, result)

% =========================================================
% result_final : 当前Pareto集合结构体，包含
%                - fval (N x M)
%                - x    (N x ...)
% result       : 待加入数据结构体，包含
%                - fval (K x M)
%                - x    (K x ...)
%
% 规则：
% 1. 按第三维 z 从小到大处理 result.fval
% 2. 新点加入后：Pareto点数必须 +1
% 3. 否则拒绝加入
%
% 输出：
% result_final : 合并后的结构体，包含 result_final.fval 和 result_final.x
% =========================================================

clc;

if ~isfield(result_final, 'fval') || ~isfield(result_final, 'x')
    error('result_final 必须包含字段 fval 和 x。');
end

if ~isfield(result, 'fval') || ~isfield(result, 'x')
    error('result 必须包含字段 fval 和 x。');
end

if size(result_final.fval, 2) ~= size(result.fval, 2)
    error('result_final.fval 与 result.fval 维度不一致。');
end

if size(result_final.x, 1) ~= size(result_final.fval, 1)
    error('result_final.x 行数必须与 result_final.fval 行数一致。');
end

if size(result.x, 1) ~= size(result.fval, 1)
    error('result.x 行数必须与 result.fval 行数一致。');
end

% ====== 按第三维排序（同步记录索引） ======
[~, sort_idx] = sort(result.fval(:, 3), 'ascend');
P2 = result.fval(sort_idx, :);
X2 = result.x(sort_idx, :);

% ====== 初始集合 ======
P_current = result_final.fval;
X_current = result_final.x;

fprintf('初始Pareto点数量: %d\n', size(P_current, 1));

for i = 1:size(P2, 1)

    candidate_fval = P2(i, :);
    candidate_x = X2(i, :);

    old_count = size(P_current, 1);

    P_temp = [P_current; candidate_fval];
    X_temp = [X_current; candidate_x];

    idx = pareto_filter(P_temp);

    P_new = P_temp(idx, :);
    X_new = X_temp(idx, :);

    new_count = size(P_new, 1);

    if new_count == old_count + 1
        P_current = P_new;
        X_current = X_new;

        fprintf('加入成功 [%3d/%3d]   当前数量: %d\n', ...
            i, size(P2, 1), new_count);
    else
        fprintf('拒绝加入 [%3d/%3d]\n', ...
            i, size(P2, 1));
    end
end

result_final.fval = P_current;
result_final.x = X_current;

fprintf('\n最终Pareto点数量: %d\n', size(result_final.fval, 1));

end

function idx = pareto_filter(P)

N = size(P, 1);

is_pareto = true(N, 1);

for i = 1:N

    if ~is_pareto(i)
        continue;
    end

    for j = 1:N

        if i == j
            continue;
        end

        if all(P(j, :) <= P(i, :)) && any(P(j, :) < P(i, :))
            is_pareto(i) = false;
            break;
        end
    end
end

idx = is_pareto;

end
