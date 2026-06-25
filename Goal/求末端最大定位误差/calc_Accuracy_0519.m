%% 基于D-H参数偏差计算第k分支末端的误差矩阵dTBase_nk

function dTBase_nk = calc_Accuracy_0519(LP, SV, k, dhpara)

path_k = j_num(LP,k);

dtheta = NaN(1,LP.num_q);
da = NaN(1,LP.num_q);
dalpha = NaN(1,LP.num_q);
dd = NaN(1,LP.num_q);

dhpara_len = numel(dhpara);
dhpara_set = dhpara_len/4;


dtheta(path_k(1):path_k(end)) = dhpara(1:dhpara_set);
da(path_k(1):path_k(end))     = dhpara(dhpara_set+1:dhpara_set*2);
dalpha(path_k(1):path_k(end)) = dhpara(dhpara_set*2+1:dhpara_set*3);
dd(path_k(1):path_k(end))     = dhpara(dhpara_set*3+1:dhpara_set*4);

% 计算{k}分支所有模块相对基座标系的齐次变换矩阵
T_nom_list = cell(1, numel(path_k));
for t = 1:numel(path_k)
    i = path_k(t); % 当前模块编号
    T_nom_list{t} = [SV.AA(:,3*i-2:3*i),SV.RR(:,i);0 0 0 1];
end

% 4) 逐路径模块构造一阶误差（数值偏导线性化）
% 注意: 关节模块使用 dtheta/da/dalpha/dd；连杆模块仅使用 da/dd（题设要求）
eps_fd = 1e-8;
dTBase_nk = zeros(4,4);

for t = 1:numel(path_k)
    i = path_k(t);

    % 前缀/后缀（用于将局部误差映射到基坐标）
    if t == 1
        T_pre = eye(4);
    else
        T_pre = T_nom_list{t-1};
    end

    T_suf = eye(4);
    % 从 i+1 到末端名义链
    for s = t+1:numel(path_k)
        T_suf = T_suf * local_module_nominal(LP, SV, path_k(s));
    end
    % 末端远端补偿
    last_i = path_k(end);
    if LP.J_type(last_i) == 'R'
        m_last = LP.module(last_i);
        T_suf = T_suf * [LP.Rd(:,:,m_last), LP.Pd(:,m_last); 0 0 0 1];
    end

    % 模块 i 的局部误差（数值偏导）
    dTi = zeros(4,4);

    % a 误差
    dTi = dTi + da(i) * local_partial_fd(LP, SV, i, 'a', eps_fd);
    % d 误差
    dTi = dTi + dd(i) * local_partial_fd(LP, SV, i, 'd', eps_fd);

    if LP.J_type(i) == 'R'
        % 转动模块额外考虑 theta/alpha
        dTi = dTi + dtheta(i) * local_partial_fd(LP, SV, i, 'theta', eps_fd);
        dTi = dTi + dalpha(i) * local_partial_fd(LP, SV, i, 'alpha', eps_fd);
    end

    dTBase_nk = dTBase_nk + T_pre * dTi * T_suf;
end

dTBase_nk(abs(dTBase_nk) < 1e-14) = 0;

end

%% 计算相邻模块的齐次变换矩阵 
function Ti = local_module_nominal(LP, SV, i)
% 按当前项目拼接逻辑定义"父节点坐标系 -> 当前节点坐标系"的局部变换
m = LP.module(i);
A_align = cz(LP.align(i));

if LP.BB(i) == 0
    R_base = LP.RBcp(:,:,LP.SN(i)) * A_align;
    p_base = LP.PBcp(:,LP.SN(i));
    if LP.J_type(i) == 'R'
        R_local = LP.Rp(:,:,m) * cz(SV.q(i));
        p_local = LP.Pp(:,m);
    else
        R_local = LP.T_L(1:3,1:3,m);
        p_local = LP.T_L(1:3,4,m);
    end
    Ti = [R_base*R_local, p_base + R_base*p_local; 0 0 0 1];
    return;
end

pidx = LP.BB(i);
pm = LP.module(pidx);
if LP.J_type(pidx) == 'R'
    R_parent_out = LP.Rd(:,:,pm);
    p_parent_out = LP.Pd(:,pm);
else
    R_parent_out = eye(3);
    p_parent_out = zeros(3,1);
end

if LP.J_type(i) == 'R'
    R_i = A_align * LP.Rp(:,:,m) * cz(SV.q(i));
    p_i = A_align * LP.Pp(:,m);
else
    R_i = A_align * LP.T_L(1:3,1:3,m);
    p_i = A_align * LP.T_L(1:3,4,m);
end

R = R_parent_out * R_i;
p = p_parent_out + R_parent_out * p_i;
Ti = [R, p; 0 0 0 1];
end

%% 对局部模块变换进行数值偏导，映射"非严格DH拼接"到"DH参数误差"
function dTi = local_partial_fd(LP, SV, i, mode, eps_fd)
T0 = local_module_nominal(LP, SV, i); % T_(i-1)_2_i
Tp = local_module_perturbed(LP, SV, i, mode, eps_fd);
dTi = (Tp - T0) / eps_fd;
end

%% 在模块 i 的近端SDH块施加参数扰动，得到扰动后的局部变换
function Ti = local_module_perturbed(LP, SV, i, mode, delta)
% 在模块 i 的近端SDH块施加参数扰动，得到扰动后的局部变换
m = LP.module(i);
A_align = cz(LP.align(i));

% 名义分解
if LP.J_type(i) == 'R'
    T_prox = [LP.Rp(:,:,m), LP.Pp(:,m); 0 0 0 1];
    T_joint = [cz(SV.q(i)), zeros(3,1); 0 0 0 1];
    T_body = T_prox * T_joint;
else
    T_body = LP.T_L(:,:,m);
end

% 仅通过"等效标准DH微扰"修正模块体变换
dth = 0; dda = 0; dal = 0; ddd = 0;
switch mode
    case 'theta', dth = delta;
    case 'a',     dda = delta;
    case 'alpha', dal = delta;
    case 'd',     ddd = delta;
end

% 标准DH小扰动块：Rz(dth)*Tz(ddd)*Tx(dda)*Rx(dal)
T_err = dh_std(dth, ddd, dda, dal);

if LP.J_type(i) == 'R'
    T_body_p = T_prox * T_err * T_joint;
else
    % 连杆模块按题设仅考虑 a,d；theta/alpha 会在主调处不启用
    T_body_p = T_body * T_err;
end

if LP.BB(i) == 0
    R_base = LP.RBcp(:,:,LP.SN(i)) * A_align;
    p_base = LP.PBcp(:,LP.SN(i));
    Ti = [R_base, p_base; 0 0 0 1] * T_body_p;
    return;
end

pidx = LP.BB(i);
pm = LP.module(pidx);
if LP.J_type(pidx) == 'R'
    T_parent_out = [LP.Rd(:,:,pm), LP.Pd(:,pm); 0 0 0 1];
else
    T_parent_out = eye(4);
end

Ti = T_parent_out * [A_align, zeros(3,1); 0 0 0 1] * T_body_p;
end

%% 标准D-H
function T = dh_std(theta, d, a, alpha)
ct = cos(theta); st = sin(theta);
ca = cos(alpha); sa = sin(alpha);
T = [ct, -st*ca,  st*sa, a*ct;
     st,  ct*ca, -ct*sa, a*st;
      0,     sa,     ca,    d;
      0,      0,      0,    1];
end

