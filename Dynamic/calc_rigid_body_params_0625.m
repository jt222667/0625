function [m_all, rc_all, I_all] = calc_rigid_body_params_0625(module, align, RP_data)
%   CALC_RB_DYNAMICS_0318 计算相邻两个关节模块之间新刚体的动力学参数
%   module = [Joint_i Joint_j] 或 [Joint_i Link_k Joint_j]
%   align  为与 module 对应的连接方式参数。
%   输出 m_rb、rc_rb、I_rb 均表示在 Joint_i 的关节局部坐标系下。
%   I_rb 是关于新刚体整体质心的质心惯量。
%% 函数开始
num_module = length(module);
install = ones(1, num_module);
sequence = 0:num_module-1;

LP_tmp = LP_generate(module, install, align, sequence, RP_data);
SV_tmp = SV_generate(LP_tmp);
SV_tmp = calc_aa_0318(LP_tmp, SV_tmp);
SV_tmp = calc_pos_0318(LP_tmp, SV_tmp);

%% 数据初始化
m_1  = LP_tmp.module_mass_dist(module(1));
rc_1 = LP_tmp.module_COM_dist(:, module(1));
I_1  = LP_tmp.module_inertia_dist(:,:, module(1));
R01 = SV_tmp.AA(:,1:3);
P01 = SV_tmp.RR(:,1);
R11 = R01' * R01;
P11 = P01 - P01;


if num_module == 3
    m_2  = LP_tmp.module_mass(module(2));
    rc_2 = LP_tmp.module_COM(:, module(2));
    I_2  = LP_tmp.module_inertia(:,:, module(2));
    R02 = R01 * LP_tmp.Rd(:,:,module(1)) * cz(LP_tmp.align(2));
    P02 = P01 + R01 * LP_tmp.Pd(:,module(1));
    R12 = R01' * R02;
    P12 = R01' * (P02 - P01);

    m_3  = LP_tmp.module_mass_prox(module(3));
    rc_3 = LP_tmp.module_COM_prox(:, module(3));
    I_3  = LP_tmp.module_inertia_prox(:,:, module(3));
    R03 = SV_tmp.AA(:,4:6)*cz(LP_tmp.align(3));
    P03 = SV_tmp.RR(:,2);
    R13 = R01' * R03;
    P13 = R01' * (P03 - P01);
else
    m_2  = LP_tmp.module_mass_prox(module(2));
    rc_2 = LP_tmp.module_COM_prox(:, module(2));
    I_2  = LP_tmp.module_inertia_prox(:,:, module(2));
    R02 = R01 * LP_tmp.Rd(:,:,module(1)) * cz(LP_tmp.align(2));
    P02 = P01 + R01 * LP_tmp.Pd(:,module(1));
    R12 = R01' * R02;
    P12 = R01' * (P02 - P01);
end

%% 计算新刚体参数
S = @(v) (norm(v)^2 * eye(3) - v * v.');
if num_module == 3
    m_all = m_1 + m_2 + m_3;
    rc1_1 = rc_1;
    I1_1 = I_1;
    [rc2_1, I2_1] = Dy_Trans(m_2, rc_2, I_2, R12, P12);
    [rc3_1, I3_1] = Dy_Trans(m_3, rc_3, I_3, R13, P13);
    rc_all = (m_1 * rc_1 + m_2 * rc2_1 + m_3 * rc3_1) / m_all;
    I_all  = I1_1 + m_1 * S(rc1_1 - rc_all) ...
           + I2_1 + m_2 * S(rc2_1 - rc_all) ...
           + I3_1 + m_3 * S(rc3_1 - rc_all);
else
    m_all = m_1 + m_2;
    rc1_1 = rc_1;
    I1_1 = I_1;
    [rc2_1, I2_1] = Dy_Trans(m_2, rc_2, I_2, R12, P12);
    rc_all = (m_1 * rc_1 + m_2 * rc2_1) / m_all;
    I_all  = I1_1 + m_1 * S(rc1_1 - rc_all) ...
           + I2_1 + m_2 * S(rc2_1 - rc_all);
end
I_all = (I_all + I_all.') / 2;

end
