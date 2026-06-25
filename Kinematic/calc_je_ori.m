%% 计算第k分支的雅可比矩阵

function Jacobian = calc_je_ori( LP, SV , k)

% Ez = [0; 0; 1];       % 初始化 Ez
% number of links from base to endpoint.
path_k = SV.Path{k}(LP.J_type(SV.Path{k}) == 'R');

% Calculation of Jacobian
JJ_te = calc_jte_ori( LP, SV, k );
JJ_re = calc_jre_ori( LP, SV, k );
JJ = [ JJ_te; JJ_re ];

% Compose the Jacobian using the corresponding joints.
Jacobian = zeros(6,LP.num_joint);

for i = 1:length(path_k)
    idx = LP.R_idx(1:LP.num_joint) == path_k(i);
    Jacobian(:, idx) = JJ(:, i);
end
end
%%%EOF



