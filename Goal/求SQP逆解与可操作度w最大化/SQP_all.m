%% 优化目标1：计算机器人所有末端最大可操作度之和w_goalSV_goal

function [SV_goal, flag_goal, q_goal, w_goal] =  SQP_all(LP, SV, Goal)

% flag_goal ：0 表示可达，1 表示不可达。
flag_goal = 0;
w_goal  = 0;
q_goal = [];

for k = 1:SV.m
    [SV, flag, q_k, ~, w_k] =  SQP_main(LP, SV, Goal, k);
    q_goal = [q_goal q_k];
    w_goal = w_goal + w_k;
    if flag
        flag_goal = 1;
        SV_goal = SV;
        return;
    end

end

SV_goal = Trans_aa_pos_ori(LP,SV,q_goal);

end
