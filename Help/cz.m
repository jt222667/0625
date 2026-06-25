%% 计算绕z轴旋转的余弦矩阵

function Cz = cz( theta )

Cz = [  cos(theta)  -sin(theta)  0;
        sin(theta)  cos(theta)  0;
                 0           0  1 ];
end
