function [M, C, G] = calc_MCG_0625(LP, SV, q0, qd0)

%% 牛顿欧拉法递推计算 M C G
g = 9.8;
Z = [0;0;1];
idx_q = LP.R_idx(1:LP.num_joint);
rb = LP.rb;

%% 关节变量整理
q0  = q0(:);
qd0 = qd0(:);

if isscalar(q0)
    q0  = q0  * ones(LP.num_joint,1);
    qd0 = qd0 * ones(LP.num_joint,1);
end

%% 当前构型运动学
SV.q(idx_q) = q0;
SV = calc_aa_0318(LP, SV);
SV = calc_pos_0318(LP, SV);

%% 绝对姿态矩阵
R0 = eye(3);
R1 = SV.AA(:,idx_q(1)*3-2:idx_q(1)*3);
R2 = SV.AA(:,idx_q(2)*3-2:idx_q(2)*3);
R3 = SV.AA(:,idx_q(3)*3-2:idx_q(3)*3);
R4 = SV.AA(:,idx_q(4)*3-2:idx_q(4)*3);
R5 = SV.AA(:,idx_q(5)*3-2:idx_q(5)*3);
R6 = SV.AA(:,idx_q(6)*3-2:idx_q(6)*3);
R7 = SV.AA(:,idx_q(7)*3-2:idx_q(7)*3);

%% 相邻坐标系旋转矩阵
% Aij：从 j 坐标系转到 i 坐标系
A10 = R1'*R0;    A01 = A10';
A21 = R2'*R1;    A12 = A21';
A32 = R3'*R2;    A23 = A32';
A43 = R4'*R3;    A34 = A43';
A54 = R5'*R4;    A45 = A54';
A65 = R6'*R5;    A56 = A65';
A76 = R7'*R6;    A67 = A76';

%% 关节原点位置
O0 = [0;0;0];
O1 = SV.RR(:,idx_q(1));
O2 = SV.RR(:,idx_q(2));
O3 = SV.RR(:,idx_q(3));
O4 = SV.RR(:,idx_q(4));
O5 = SV.RR(:,idx_q(5));
O6 = SV.RR(:,idx_q(6));
O7 = SV.RR(:,idx_q(7));

%% 相邻关节位移向量
% Pij：从 i 坐标系原点指向 j 坐标系原点，在 i 坐标系下表达
P01 = R0'*(O1-O0);
P12 = R1'*(O2-O1);
P23 = R2'*(O3-O2);
P34 = R3'*(O4-O3);
P45 = R4'*(O5-O4);
P56 = R5'*(O6-O5);
P67 = R6'*(O7-O6);

%% 质心位置、转动惯量、质量
PC1 = rb(1).rc;
PC2 = rb(2).rc;
PC3 = rb(3).rc;
PC4 = rb(4).rc;
PC5 = rb(5).rc;
PC6 = rb(6).rc;
PC7 = rb(7).rc;

IC1 = rb(1).I;
IC2 = rb(2).I;
IC3 = rb(3).I;
IC4 = rb(4).I;
IC5 = rb(5).I;
IC6 = rb(6).I;
IC7 = rb(7).I;

m1 = rb(1).m;
m2 = rb(2).m;
m3 = rb(3).m;
m4 = rb(4).m;
m5 = rb(5).m;
m6 = rb(6).m;
m7 = rb(7).m;

%% 结果初始化
M = zeros(7,7);
C = zeros(7,1);
G = zeros(7,1);

%% ============================================================
%  dyn_case = 1      ：计算 G
%  dyn_case = 2 ~ 8  ：计算 M 第 1 ~ 7 列
%  dyn_case = 9      ：计算 C
%% ============================================================

for dyn_case = 1:9

    if dyn_case == 1
        % ---------- 计算 G ----------
        qd_cal  = zeros(7,1);
        qdd_cal = zeros(7,1);
        V_d00 = [0;0;g];

    elseif dyn_case >= 2 && dyn_case <= 8
        % ---------- 计算 M 的第 dyn_case-1 列 ----------
        qd_cal  = zeros(7,1);
        qdd_cal = zeros(7,1);
        qdd_cal(dyn_case-1) = 1;
        V_d00 = [0;0;0];

    else
        % ---------- 计算 C ----------
        qd_cal  = qd0;
        qdd_cal = zeros(7,1);
        V_d00 = [0;0;0];
    end

    %% ================= 正向递推 =================
    W00 = [0;0;0];
    W_d00 = [0;0;0];

    % ---------- 连杆1 ----------
    W11 = A10*W00 + qd_cal(1)*Z;
    W_d11 = A10*W_d00 + cross(A10*W00,qd_cal(1)*Z) + qdd_cal(1)*Z;
    V_d11 = A10*(cross(W_d00,P01) + cross(W00,cross(W00,P01)) + V_d00);
    VC_d11 = cross(W_d11,PC1) + cross(W11,cross(W11,PC1)) + V_d11;
    F11 = m1*VC_d11;
    N11 = IC1*W_d11 + cross(W11,IC1*W11);

    % ---------- 连杆2 ----------
    W22 = A21*W11 + qd_cal(2)*Z;
    W_d22 = A21*W_d11 + cross(A21*W11,qd_cal(2)*Z) + qdd_cal(2)*Z;
    V_d22 = A21*(cross(W_d11,P12) + cross(W11,cross(W11,P12)) + V_d11);
    VC_d22 = cross(W_d22,PC2) + cross(W22,cross(W22,PC2)) + V_d22;
    F22 = m2*VC_d22;
    N22 = IC2*W_d22 + cross(W22,IC2*W22);

    % ---------- 连杆3 ----------
    W33 = A32*W22 + qd_cal(3)*Z;
    W_d33 = A32*W_d22 + cross(A32*W22,qd_cal(3)*Z) + qdd_cal(3)*Z;
    V_d33 = A32*(cross(W_d22,P23) + cross(W22,cross(W22,P23)) + V_d22);
    VC_d33 = cross(W_d33,PC3) + cross(W33,cross(W33,PC3)) + V_d33;
    F33 = m3*VC_d33;
    N33 = IC3*W_d33 + cross(W33,IC3*W33);

    % ---------- 连杆4 ----------
    W44 = A43*W33 + qd_cal(4)*Z;
    W_d44 = A43*W_d33 + cross(A43*W33,qd_cal(4)*Z) + qdd_cal(4)*Z;
    V_d44 = A43*(cross(W_d33,P34) + cross(W33,cross(W33,P34)) + V_d33);
    VC_d44 = cross(W_d44,PC4) + cross(W44,cross(W44,PC4)) + V_d44;
    F44 = m4*VC_d44;
    N44 = IC4*W_d44 + cross(W44,IC4*W44);

    % ---------- 连杆5 ----------
    W55 = A54*W44 + qd_cal(5)*Z;
    W_d55 = A54*W_d44 + cross(A54*W44,qd_cal(5)*Z) + qdd_cal(5)*Z;
    V_d55 = A54*(cross(W_d44,P45) + cross(W44,cross(W44,P45)) + V_d44);
    VC_d55 = cross(W_d55,PC5) + cross(W55,cross(W55,PC5)) + V_d55;
    F55 = m5*VC_d55;
    N55 = IC5*W_d55 + cross(W55,IC5*W55);

    % ---------- 连杆6 ----------
    W66 = A65*W55 + qd_cal(6)*Z;
    W_d66 = A65*W_d55 + cross(A65*W55,qd_cal(6)*Z) + qdd_cal(6)*Z;
    V_d66 = A65*(cross(W_d55,P56) + cross(W55,cross(W55,P56)) + V_d55);
    VC_d66 = cross(W_d66,PC6) + cross(W66,cross(W66,PC6)) + V_d66;
    F66 = m6*VC_d66;
    N66 = IC6*W_d66 + cross(W66,IC6*W66);

    % ---------- 连杆7 ----------
    W77 = A76*W66 + qd_cal(7)*Z;
    W_d77 = A76*W_d66 + cross(A76*W66,qd_cal(7)*Z) + qdd_cal(7)*Z;
    V_d77 = A76*(cross(W_d66,P67) + cross(W66,cross(W66,P67)) + V_d66);
    VC_d77 = cross(W_d77,PC7) + cross(W77,cross(W77,PC7)) + V_d77;
    F77 = m7*VC_d77;
    N77 = IC7*W_d77 + cross(W77,IC7*W77);

    %% ================= 反向递推 =================
    f88 = [0;0;0];
    n88 = [0;0;0];
    P78 = [0;0;0];

    % ---------- 连杆7 ----------
    f77 = F77 + f88;
    n77 = N77 + n88 + cross(PC7,F77) + cross(P78,f88);
    tao7 = n77.'*Z;

    % ---------- 连杆6 ----------
    f66 = F66 + A67*f77;
    n66 = N66 + A67*n77 + cross(PC6,F66) + cross(P67,A67*f77);
    tao6 = n66.'*Z;

    % ---------- 连杆5 ----------
    f55 = F55 + A56*f66;
    n55 = N55 + A56*n66 + cross(PC5,F55) + cross(P56,A56*f66);
    tao5 = n55.'*Z;

    % ---------- 连杆4 ----------
    f44 = F44 + A45*f55;
    n44 = N44 + A45*n55 + cross(PC4,F44) + cross(P45,A45*f55);
    tao4 = n44.'*Z;

    % ---------- 连杆3 ----------
    f33 = F33 + A34*f44;
    n33 = N33 + A34*n44 + cross(PC3,F33) + cross(P34,A34*f44);
    tao3 = n33.'*Z;

    % ---------- 连杆2 ----------
    f22 = F22 + A23*f33;
    n22 = N22 + A23*n33 + cross(PC2,F22) + cross(P23,A23*f33);
    tao2 = n22.'*Z;

    % ---------- 连杆1 ----------
    f11 = F11 + A12*f22;
    n11 = N11 + A12*n22 + cross(PC1,F11) + cross(P12,A12*f22);
    tao1 = n11.'*Z;

    tao_cal = [tao1;tao2;tao3;tao4;tao5;tao6;tao7];

    %% ================= 结果存储 =================
    if dyn_case == 1
        G = tao_cal;

    elseif dyn_case >= 2 && dyn_case <= 8
        M(:,dyn_case-1) = tao_cal;

    else
        C = tao_cal;
    end
end

%% 质量矩阵强制对称化
M = 0.5*(M + M.');

end
