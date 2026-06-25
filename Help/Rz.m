%% 计算绕z轴旋转的余弦矩阵,并补充为4*4齐次变换矩阵

function rz = Rz( theta )

rz = [cos(theta) -sin(theta) 0 0;
    sin(theta) cos(theta) 0 0;
    0 0 1 0;
    0 0 0 1];

end