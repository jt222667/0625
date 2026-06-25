%% 机器人结构状态参数结构体LP

function LP = LP_generate(module, install, align, sequence, RP_data) %#codegen

%基础参数
LP.module = module;
LP.num_q  = length(module);  % 总模块数
LP.install = install;
LP.align   = align * 2 * pi/3;
LP.BB      = sequence;

% 从 RP_data 读取基础参数
LP.Rp   = RP_data.Rp;
LP.Rd   = RP_data.Rd;
LP.Pp   = RP_data.Pp;
LP.Pd   = RP_data.Pd;
LP.RBcp = RP_data.RBcp;
LP.PBcp = RP_data.PBcp;
LP.T_L  = RP_data.T_L;
LP.T_B  = RP_data.T_B;

% 动力学参数
LP.module_mass = RP_data.mass;
LP.module_COM =  RP_data.COM;
LP.module_inertia   = RP_data.Inertia;
LP.module_mass_prox = RP_data.mass_prox;
LP.module_mass_dist = RP_data.mass_dist;
LP.module_COM_prox  = RP_data.COM_prox;
LP.module_COM_dist  = RP_data.COM_dist;
LP.module_inertia_prox = RP_data.Inertia_prox;
LP.module_inertia_dist = RP_data.Inertia_dist;

% 关节类型与索引
LP.J_type    = RP_data.J_type(module);
R_idx        = find(LP.J_type == 'R');
LP.R_idx     = [R_idx, zeros(1, 30 - length(R_idx))];
LP.num_joint = length(R_idx); 

% 被动关节标记
LP.S0 = zeros(1, LP.num_q);
LP.S0(LP.BB == 0) = 1;

% 被动关节编号
LP.SN = zeros(1, LP.num_q);
zero_indices = find(LP.BB == 0);
LP.SN(zero_indices) = 1:length(zero_indices);

% SE 标记
LP.SE = zeros(1, LP.num_q);
for i = 2:LP.num_q
    if LP.S0(i) == 1
        LP.SE(i-1) = 1;
    end
end
LP.SE(LP.num_q) = 1;

LP.SS = calculate_SS_project(LP);

end