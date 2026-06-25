%% 目标工作点设置函数，生成目标工作点结构体Goal

function Goal = Goal_init(SV)
Goal.Path = SV.Path;
Goal.POS_e  = SV.POS_e;
Goal.ORI_e  = SV.ORI_e;
Goal.change = zeros(1,SV.m);
end