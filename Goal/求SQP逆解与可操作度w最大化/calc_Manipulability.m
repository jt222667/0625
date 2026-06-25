%% 计算各个分支末端的可操作度w

function w = calc_Manipulability(LP, SV)

w = zeros(1,SV.m);

for i = 1:SV.m
    Jacob = calc_je_ori( LP, SV , i);
    JJT = Jacob * Jacob';
    det_val = det(JJT);
    if det_val > 0
        w(i) = sqrt(det_val);
    else
        w(i) = 0;
    end
end

end
