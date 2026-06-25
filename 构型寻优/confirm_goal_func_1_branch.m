%% 验证机器人单分支构型各项指标求解函数
clc;
clear;

%% 目标点设置
tar.POS_e = [1.80 0 1.80]';
tar.ORI_e = cy(pi/2);

%% 模块库初始化
RP_data = Module_Lib();

%% 决策变量生成
[n, module_raw, install_raw, align_raw, sequence_raw] = generate_valid_config_x(RP_data);

[module_out, install_out, align_out, sequence_out, num_exp, is_valid, ~] = expand_module_units(module_raw(1:n),install_raw(1:n),align_raw(1:n),sequence_raw(1:n),RP_data);

%% 机器人初始化

LP = LP_generate(module_out, install_out, align_out, sequence_out, RP_data);
SV = SV_generate(LP);

%% 目标点初始化
Goal = Goal_init(SV);
Goal.change = [1 0 0];
Goal.POS_e{1} = tar.POS_e;
Goal.ORI_e{1} = tar.ORI_e;

%% 求优化目标1：末端最大可操作度
[SV_goal, flag_goal, q_goal, w_goal] =  SQP_all(LP, SV, Goal);

%% 求优化目标2：末端最大定位误差
sig_goal = calc_sig_worst_all(SV_goal, LP);

%% 求优化目标3：结构复杂度
num_goal = num_exp + n;

%% 求优化目标3：机器人原始模块数+展开后模块数

%% 绘图
PlotSV(LP,SV_goal);

