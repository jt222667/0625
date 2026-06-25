%% 计算第k分支的雅旋转可比矩阵

function JJ_re = calc_jre_ori( LP, SV, k )

Ez = [0; 0; 1];       

path_k = SV.Path{k}(LP.J_type(SV.Path{k}) == 'R');

JJ_re = [];

for i = 1 : 1 : length(path_k)
    JJ_re = [ JJ_re SV.AA(:,path_k(i)*3-2:path_k(i)*3)*Ez ];
end

%%%EOF
