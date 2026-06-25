%% SQP_main()的等式约束函数，目标是使机器人第k分支末端位姿与目标点设置重合

function [c, ceq] = SQP_constraint(q, LP, SV, Goal, k, R_idx_k)

SV_tmp = Trans_aa_pos_k(LP, SV, q(:), R_idx_k);

c = [];

% 当前末端位置与姿态
pos_now = SV_tmp.POS_e{k}(:);
ori_now = rotm2eul(SV_tmp.ORI_e{k});

% 目标位置与姿态
pos_goal = Goal.POS_e{k}(:);
ori_goal = rotm2eul(Goal.ORI_e{k});

% 位置误差 (3×1)
pos_err = pos_now - pos_goal;

% 姿态误差 (3×1)
% 防止欧拉角跳变，映射到 [-pi, pi]
ori_err = wrapToPi(ori_now - ori_goal);

% 写入 ceq
ceq = [ pos_err(:); ori_err(:) ];

end