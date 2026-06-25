%% 正运动学递推：计算所有模块相对于基座标系的位移向量

function SV = calc_pos_0318( LP, SV )

for i = 1 : LP.num_q
    if LP.BB(i) == 0
        A_I_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i));
        if LP.J_type(i) == 'R'
            SV.RR(:,i) = SV.R0(:) + SV.A0*LP.PBcp(:,LP.SN(i)) + SV.A0*A_I_i*LP.Pp(:,LP.module(i));
        elseif LP.J_type(i) == 'L'
            SV.RR(:,i) = SV.R0(:) + SV.A0*LP.PBcp(:,LP.SN(i)) + SV.A0*A_I_i*LP.T_L(1:3,4,LP.module(i));
        end
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'R'
        A_I_BB = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3);
        if LP.J_type(i) == 'R'
            SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.Pd(:,LP.module(LP.BB(i))) + A_I_BB*LP.Rd(:,:,LP.module(LP.BB(i)))*cz(LP.align(i))*LP.Pp(:,LP.module(i));
        elseif LP.J_type(i) == 'L'
            SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.Pd(:,LP.module(LP.BB(i))) + A_I_BB*LP.Rd(:,:,LP.module(LP.BB(i)))*cz(LP.align(i))*LP.T_L(1:3,4,LP.module(i));
        end
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'L'
        A_I_BB = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3)*cz(LP.align(i));
        if LP.J_type(i) == 'R'
            SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.Pp(:,LP.module(i));
        elseif LP.J_type(i) == 'L'
            SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.T_L(1:3,4,LP.module(i));
        end
    end
end

end

