%% 计算绕x轴旋转的余弦矩阵

function Cx = cx(theta)

Cx =[ 1           0          0;
      0  cos(theta) -sin(theta);
      0  sin(theta) cos(theta) ];
end