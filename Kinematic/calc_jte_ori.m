%% 计算第k分支的雅平移可比矩阵

function JJ_te = calc_jte_ori( LP, SV, k )

Ez = [0; 0; 1];       % 初始化 Ez

path_k = SV.Path{k}(LP.J_type(SV.Path{k}) == 'R');

JJ_te = [];

for i = 1 : length(path_k)
    A_I_i = SV.AA(:,path_k(i)*3-2:path_k(i)*3);
    temp = cross( (A_I_i*Ez) , ( SV.POS_e{k} - SV.RR(:,path_k(i))) );
    JJ_te = [ JJ_te temp ];
end

end


%%%EOF
