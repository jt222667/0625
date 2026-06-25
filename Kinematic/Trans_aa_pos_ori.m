%% 正运动学集成函数：求解机器人在当前设置关节角q0下的位姿，更新状态参数结构体SV

function SV = Trans_aa_pos_ori(LP, SV, q0) % q0 是 1*LP.num_joint维的

SV.R0 = [ 0 0 0 ]'; 
SV.A0 = eye(3); 

SV.q(LP.J_type == 'R') = q0;

SV = calc_aa_0318( LP, SV );
SV = calc_pos_0318( LP, SV );

for i = 1:SV.m
    [ SV.POS_e{i} , SV.ORI_e{i} ] = f_kin_end(LP, SV, SV.Path{i});
end

end