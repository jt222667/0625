%% 对齐次变换矩阵求逆

function T_inverse = T_inv(T)

R = T(1:3, 1:3);
p = T(1:3, 4);

R_T = R';
p_inv = -R_T * p;
T_inverse = [R_T, p_inv; 0 0 0 1];

end