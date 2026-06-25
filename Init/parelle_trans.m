function [rA, IA] = parelle_trans(R, p, IB, rB, m)

% 质心位置
rA = R*rB(:) + p;

% 惯性矩阵旋转到A系
I_A_com = R*IB*R.';

% 平行轴定理
IA = I_A_com + m*((rA.'*rA)*eye(3) - rA*rA.');

% 保证数值对称
IA = (IA + IA.')/2;

end