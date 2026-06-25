clc; clear;
%% 使用绝对路径
dataFolder = fullfile(pwd, 'data');  
if ~exist(dataFolder, 'dir')
    mkdir(dataFolder);
end

%% --------- 配置参数 ----------
opts = struct();
opts.PopulationSize = 200;
opts.MaxGenerations = 20;
opts.UseParallel = true;
POS = cell(1,10);
ORI = cell(1,10);

%% 任务1目标点：定点装配、拧螺丝、对接【301~310】
POS_e1 = [1.8 0 1.8]';
ORI_e1 = cy(pi/2);
POS{1} = POS_e1;
ORI{1} = ORI_e1;

%% 任务2目标点：爬行（两条臂）【101~125】
T2_1 = [cx(-2*pi/3) [0;0;0]; 0 0 0 1];
T2_2 = [cx(pi) [0;-2;-2]; 0 0 0 1];
T2 = T2_1 * T2_2;
POS_e2 = T2(1:3,4);
ORI_e2 = T2(1:3,1:3);
POS{2} = POS_e2;
ORI{2} = ORI_e2;

%% 任务2目标点：携带小负载【201~230】
T3 = [cy(pi) [1.5;0;0.5];0 0 0 1];
POS_e3 = T3(1:3,4);
ORI_e3 = T3(1:3,1:3);
POS{3} = POS_e3;
ORI{3} = ORI_e3;

%% 任务3目标点：搬运大负载_左臂【401~404】
R4 = [-1 0 0;0 0 1;0 1 0];
P4 = [1;-1;-1];
T4_1 = [R4,P4;0 0 0 1];
T4_2 = [cx(-2*pi/3) [0;0;0]; 0 0 0 1];
T4 = T4_2 * T4_1 ;
POS_e4 = T4(1:3,4);
ORI_e4 = T4(1:3,1:3);
POS{4} = POS_e4;
ORI{4} = ORI_e4;

%% 任务3目标点：搬运大负载_右臂【501~600】
R5 = [-1 0 0;0 0 -1;0 -1 0];
P5 = [1;1;-1];
T5_1 = [R5,P5;0 0 0 1];
T5_2 = [cx(2*pi/3) [0;0;0]; 0 0 0 1];
T5 = T5_2 * T5_1 ;
POS_e5 = T5(1:3,4);
ORI_e5 = T5(1:3,1:3);
POS{5} = POS_e5;
ORI{5} = ORI_e5;

%% 任务3目标点fac：搬运大负载_右臂【501~600】
POS{6} = [1;0.3660;1.2645];
ORI{6} = [-1,-5.7176e-15,2.1619e-13;1.0325e-13,0.8660,0.5000;-1.8996e-13,0.5000,-0.8660];

%% 1~54成为补充素材

%% --------- 目标点1 ----------
k = 6;
opts.tar.POS_e = POS{k};
opts.tar.ORI_e = ORI{k};
start_t = 601;
end_t   = 650;
for runIdx = start_t:end_t
    fprintf('Running iteration %d / %d...\n', runIdx - start_t + 1, end_t - start_t + 1);
    result = solve_MOEA_robot(opts);
    saveFile = fullfile(dataFolder, sprintf('result_run_%d.mat', runIdx));
    save(saveFile, 'result');
end
disp('All runs completed and saved in the data folder.');

