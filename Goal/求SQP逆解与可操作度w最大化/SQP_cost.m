%% SQP_main()的代价函数，目标是使第k分支可操作度最大

function cost = SQP_cost(q, LP, SV, k, R_idx_k)

SV_tmp = Trans_aa_pos_k(LP, SV, q(:), R_idx_k);

Jacob = calc_je_ori( LP, SV_tmp , k);
JJT = Jacob * Jacob';
det_val = det(JJT);
if det_val > 0
    w = sqrt(det_val);
else
    w = 0;
end

cost = -w;

end
