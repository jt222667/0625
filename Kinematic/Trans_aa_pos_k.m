%% 计算第k分支正运动学：求解机器人在当前设置关节角q_sol下的位姿，更新状态参数结构体SV

function SV = Trans_aa_pos_k(LP, SV, q_sol, R_idx_k)

SV.R0 = [ 0 0 0 ]'; 
SV.A0 = eye(3); 

SV.q(R_idx_k) = q_sol;

SV = calc_aa_0318( LP, SV );
SV = calc_pos_0318( LP, SV );

for i = 1:SV.m
    [ SV.POS_e{i} , SV.ORI_e{i} ] = f_kin_end(LP, SV, SV.Path{i});
end

end