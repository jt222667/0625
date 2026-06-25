%% 机器人状态参数结构体SV

function SV = SV_generate(LP) %#codegen
SV.R0 = [ 0 0 0 ]'; % 基座相对于惯性系I位移
SV.Q0 = [ 0 0 0 ]'; % 基座相对于惯性系I姿态
SV.A0 = eye(3); % 基座相对于惯性系I旋转矩阵
SV.AA = zeros(3,3*LP.num_q); % 关节相对于惯性系I旋转矩阵
SV.RR = zeros(3,LP.num_q); % 关节相对于惯性系I位移

SV.v0 = [ 0 0 0 ]'; % 基座质心线速度
SV.w0 = [ 0 0 0 ]'; % 基座质心角速度
SV.vd0 = [ 0 0 0 ]'; % 基座质心线加速度
SV.wd0 = [ 0 0 0 ]'; % 基座质心角加速度

SV.q = zeros(LP.num_q,1); % 关节角度
SV.qd = zeros(LP.num_q,1); % 关节角速度
SV.qdd = zeros(LP.num_q,1); % 关节角加速度

SV.vv = zeros(3,LP.num_q); % 连杆质心线速度
SV.ww = zeros(3,LP.num_q); % 连杆质心角速度
SV.vd = zeros(3,LP.num_q); % 连杆质心线加速度
SV.wd = zeros(3,LP.num_q); % 连杆质心角加速度

SV.F0 = [ 0 0 0 ]'; % 作用在基座质心的力
SV.T0 = [ 0 0 0 ]'; % 作用在基座质心的力矩
SV.Fe = zeros(3,LP.num_q); % 作用在末端点的力
SV.Te = zeros(3,LP.num_q); % 作用在末端点的力矩
SV.tau = zeros(LP.num_q,1); % 关节力矩

SV.m = sum(LP.SE);
SV.Path = cell(1,SV.m);
for i = 1:SV.m
    SV.Path{i} = j_num(LP ,i);
end
SV.POS_e = cell(1,SV.m);
SV.ORI_e = cell(1,SV.m);
for i = 1:SV.m
    SV.POS_e{i} = zeros(3,1);
    SV.ORI_e{i} = zeros(3,3);
end

SV.singleArm_joints = zeros(1,SV.m);
for i = 1:SV.m
    types = LP.J_type(SV.Path{i});     % 一次性取出
    SV.singleArm_joints(i) = sum(types == 'R');
end

end