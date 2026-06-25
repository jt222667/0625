%% 正运动学递推：计算分支末端位姿，joints为j_num()计算结果

function [ POS_e , ORI_e ] = f_kin_end(LP, SV, joints)
% 计算分支末端位姿
k = joints(end);

if LP.J_type(k) == 'R'
    POS_e = SV.RR(:,k) + SV.AA(:,k*3-2:k*3) * LP.Pd(:,LP.module(k));
    ORI_e = SV.AA(:,k*3-2:k*3) * LP.Rd(:,:,LP.module(k));
elseif LP.J_type(k) == 'L'
    POS_e = SV.RR(:,k) ;
    ORI_e = SV.AA(:,k*3-2:k*3);
end

end