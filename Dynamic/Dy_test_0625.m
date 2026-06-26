clc;
clear;
%% 机器人初始化
RP_data = Module_Lib();
[n, module_raw, install_raw, align_raw, sequence_raw] = generate_valid_config_x(RP_data);
[module_out, install_out, align_out, sequence_out, num_exp, is_valid, ~] = expand_module_units(module_raw(1:n),install_raw(1:n),align_raw(1:n),sequence_raw(1:n),RP_data);
LP = LP_generate(module_out, install_out, align_out, sequence_out, RP_data);
SV = SV_generate(LP);
SV.q = zeros(1,LP.num_q);
SV = calc_aa_0318(LP, SV);
SV = calc_pos_0318(LP, SV);

rb = calc_Dy_Para_0625(LP, RP_data);




