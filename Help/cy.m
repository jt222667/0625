%% 计算绕y轴旋转的余弦矩阵

function Cy = cy( theta )

Cy = [  cos(theta)  0  sin(theta);
    0           1           0;
    -sin(theta)  0  cos(theta) ];
end
