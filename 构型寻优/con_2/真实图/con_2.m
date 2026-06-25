
RP_data = Module_Lib();

% load("F:\\Archive 归档\\0528\\myproblem\\con_2\\106 101 125.mat");
% plot_pareto_smooth_2(result_final.fval);

i = 3;

re0 = result_final.x;
[~, idx1] = sort(result_final.fval(:,1));
re1 = result_final.fval(idx1,:);
[~, idx2] = sort(result_final.fval(:,2));
re2 = result_final.fval(idx2,:);
[~, idx3] = sort(result_final.fval(:,3));
re3 = result_final.fval(idx3,:);
idx = [idx1(1),  idx2(1),  idx3(7)];
re03 = result_final.x(idx3,:);

%% 构型输入
x_tmp = re0(idx(i),:);
m_all = x_tmp(2:1+x_tmp(1));
i_all = ones(length(m_all),1);
a_all = x_tmp(16:15+x_tmp(1));
s_all = 0:length(m_all)-1;

%% 构型解码
[module_out, install_out, align_out, sequence_out, num_exp, ~, ~] = expand_module_units(m_all, i_all, a_all, s_all, RP_data);

%% 构型参数化
LP = LP_generate(module_out, install_out, align_out, sequence_out, RP_data);
SV = SV_generate(LP);
q0 = zeros(LP.num_joint,1);
SV = Trans_aa_pos_ori(LP,SV,q0);
PlotSV(LP,SV);

%% 目标点初始化【上臂】214 201 230
% Goal = Goal_init(SV);
% Goal.change = [1 0 0];
% Goal.POS_e{1} = [1.5 0 0.5];
% Goal.ORI_e{1} = cy(pi);

%% 目标点初始化【左臂】106 101 125 【右臂】103 101 125
T2_1 = [cx(-2*pi/3) [0;0;0]; 0 0 0 1];
T2_2 = [cx(pi) [0;-2;-2]; 0 0 0 1];
T2 = T2_1 * T2_2;
POS_e2 = T2(1:3,4);
ORI_e2 = T2(1:3,1:3);

Goal = Goal_init(SV);
Goal.change = [1 0 0];
Goal.POS_e{1} = POS_e2;
Goal.ORI_e{1} = ORI_e2;

%% 求优化目标1：机器人末端最大可操作度
[SV_all, flag_all, q_all, final_w] =  SQP_all(LP, SV, Goal);
PlotSV(LP,SV_all);
view([45 25]);

final_sig = calc_sig_worst_all(SV_all,LP);

final_num = x_tmp(1) + num_exp;