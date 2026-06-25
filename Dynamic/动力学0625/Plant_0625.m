function [sys,x0,str,ts] = Plant_0625(t,x,u,flag)
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
addpath(fileparts(mfilename('fullpath')), '-begin');
get_model_data(true);
sizes = simsizes;
sizes.NumContStates  = 14;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 14;
sizes.NumInputs      = 7;
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 1;
sys = simsizes(sizes);
x0  = [0.3 0.3 0.3 0.3 0.3 0.3 0.3 0 0 0 0 0 0 0 ];
str = [];
ts  = [0 0];
end

function sys = mdlDerivatives(x,u)

[LP, SV] = get_model_data(false);

q   = x(1:7);
qd  = x(8:14);
tau = u(1:7);

[M_plant,C_plant,G_plant] = calc_MCG_0625_mex(LP, SV, q, qd);

qdd = M_plant \ (tau - C_plant - G_plant);
sys = [qd; qdd];
end

function sys = mdlOutputs(x)
sys = x;
end

function [LP, SV] = get_model_data(reset)
persistent LP_cache SV_cache
if reset
    LP_cache = [];
    SV_cache = [];
end
if isempty(LP_cache)
    LP_cache = evalin('base', 'LP');
    SV_cache = evalin('base', 'SV');
end
LP = LP_cache;
SV = SV_cache;
end
