function [sys,x0,str,ts] = Ctrl_puma(t,x,u,flag)

switch flag
    case 0
        [sys,x0,str,ts] = mdlInitializeSizes;
    case 3
        sys = mdlOutputs(u);
    case {1,2,4,9}
        sys = [];
    otherwise
        error(['Unhandled flag = ', num2str(flag)]);
end
end

function [sys,x0,str,ts] = mdlInitializeSizes
sizes = simsizes;
sizes.NumContStates  = 0;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 6;
sizes.NumInputs      = 24;
sizes.DirFeedthrough = 1;
sizes.NumSampleTimes = 1;
sys = simsizes(sizes);
x0  = [];
str = [];
ts  = [0 0];
end

function sys = mdlOutputs(u)
q_D  = u(1:6);      % 期望关节位置
q_D_dot = u(7:12);    % 期望关节速度
q_D_dot_dot = -q_D;    % 期望关节速度

q_A   = u(13:18);     % 实际关节位置
q_A_dot  = u(19:24);    % 实际关节速度

%% 前馈
persistent p560
if isempty(p560)
    mdl_puma560
    p560.gravity = [0 0 -9.81];
end

q_D  = q_D(:).';
q_D_dot = q_D_dot(:).';
q_D_dot_dot = q_D_dot_dot(:);

M = p560.inertia(q_D);
G = p560.gravload(q_D).';
Cqd = p560.rne(q_D, q_D_dot, zeros(1,6)).' - G;

tau = M * q_D_dot_dot + Cqd + G;
sys = tau(:);


end

