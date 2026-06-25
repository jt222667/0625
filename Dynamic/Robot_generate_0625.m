clc;
clear;
%% 机器人初始化
% RP_data = Module_Lib();
% [n, module_raw, install_raw, align_raw, sequence_raw] = generate_valid_config_x(RP_data);
% [module_out, install_out, align_out, sequence_out, num_exp, is_valid, ~] = expand_module_units(module_raw(1:n),install_raw(1:n),align_raw(1:n),sequence_raw(1:n),RP_data);
% LP = LP_generate(module_out, install_out, align_out, sequence_out, RP_data);
% SV = SV_generate(LP);
% q0 =  zeros(1,LP.num_joint);
% SV = Trans_aa_pos_ori(LP,SV,q0);
% PlotSV(LP,SV)
% rb = calc_Dy_Para_0625(LP, RP_data);
% LP.rb = rb;

init_mex_0625

%% 轨迹生成
t = linspace(0,10,1000);
[q, qd, qdd] = quintic_traj_0625(t, 0, pi/2, 10);
i = 995
qt = q(i);qdt = qd(i);qddt = qdd(i);
if isscalar(qt)
    qt  = qt  * ones(LP.num_joint,1);
    qdt = qdt * ones(LP.num_joint,1);
end
SV = Trans_aa_pos_ori(LP,SV,qt);
PlotSV(LP,SV)

%% 验证MCG
tic
[M_ctrl,C_ctrl,G_ctrl] = calc_MCG_0625(LP, SV, qt, qdt);
toc

tic
[M_mex,C_mex,G_mex] = calc_MCG_0625_mex(LP, SV, qt, qdt);
toc




