%% 正运动学递推：计算所有模块相对于基座标系的旋转矩阵

function SV = calc_aa_0318( LP, SV )

A_BB_i = zeros(3,3);

for i = 1 : LP.num_q
    if LP.BB(i) == 0
        if LP.J_type(i) == 'R'
            A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        else
            A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.A0*A_0_i;
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'R'
        parent_idx = LP.BB(i);
        % LP.BB(i) 是第 i 个模块的父节点编号。纯串联时 parent_idx == i-1，
        % 但树/分支拓扑中子节点可以接到任意已存在父节点，不能假设父节点就是前一个模块。
        if LP.J_type(i) == 'R'
            A_BB_i = LP.Rd(:,:,LP.module(parent_idx))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        elseif LP.J_type(i) == 'L'
            A_BB_i = LP.Rd(:,:,LP.module(parent_idx))*cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.AA(:,parent_idx*3-2:parent_idx*3)*A_BB_i;
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'L'
        parent_idx = LP.BB(i);
        if LP.J_type(i) == 'R'
            A_BB_i = cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        elseif LP.J_type(i) == 'L'
            A_BB_i = cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.AA(:,parent_idx*3-2:parent_idx*3)*A_BB_i;
    end
end

end








