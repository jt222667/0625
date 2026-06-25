function [sys,x0,str,ts] = Plant_puma(t,x,u,flag)
%CHAP2_1PLANT 7 自由度机器人动力学被控对象
% 状态 x = [q; qd]，输入 u = tau。
% 动力学方程：M(q)qdd + C(q,qd)qd + G(q) = tau。

switch flag
    case 0
        [sys,x0,str,ts] = mdlInitializeSizes;
    case 1
        sys = mdlDerivatives(x,u);
    case 3
        sys = mdlOutputs(x);
    case {2,4,9}
        sys = [];
    otherwise
        error(['Unhandled flag = ', num2str(flag)]);
end
end

function [sys,x0,str,ts] = mdlInitializeSizes
sizes = simsizes;
sizes.NumContStates  = 12;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 12;
sizes.NumInputs      = 6;
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 1;
sys = simsizes(sizes);
% x0  = [0.3 0.3 0.3 0.3 0.3 0.3 0 0 0 0 0 0 ];
x0  = [0.31 0.31 0.31 0.31 0.31 0.31 0 0 0 0 0 0 ];
str = [];
ts  = [0 0];
end

function sys = mdlDerivatives(x,u)

q   = x(1:6);
qd  = x(7:12);
tau = u(1:6);

persistent p560
if isempty(p560)
    mdl_puma560
    p560.gravity = [0 0 -9.81];
end

% 转成 Robotics Toolbox 需要的 1×6
q = q(:).';
qd = qd(:).';

M = p560.inertia(q);
G = p560.gravload(q).';                     % 转成 6×1
Cqd = p560.rne(q, qd, zeros(1,6)).' - G;    % 转成 6×1

qdd = M \ (tau - Cqd - G);

sys = [qd.'; qdd];
end

function sys = mdlOutputs(x)
sys = x;
end

