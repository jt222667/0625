function [result_final, order] = Sample_Rich(result_final,i)

dataDir = 'F:\Archive 归档\0528\myproblem\data';

ranges = [
    1   54
    101  125
    201  230
    301  310
    401  404
    501  550
    601  621
    ];

%% 找到i所在区间
idx_self = [];

for k = 1:size(ranges,1)
    if i >= ranges(k,1) && i <= ranges(k,2)
        idx_self = k;
        break;
    end
end

%% 将自身区间放到第一位
if ~isempty(idx_self)
    % order = [idx_self , setdiff(1:size(ranges,1),idx_self,'stable')];
    other_idx = setdiff(1:size(ranges,1), idx_self);
    order = [idx_self, other_idx(randperm(length(other_idx)))];
else
    order = 1:size(ranges,1);
end

%% 按顺序合并
for kk = order
    for j = ranges(kk,1):ranges(kk,2)
        if j == i
            continue;
        end
        msg = fullfile(dataDir,sprintf('result_run_%d.mat',j));
        if ~isfile(msg)
            continue;
        end
        S = load(msg,'result');
        result_final = merge_pareto_incremental_2(result_final,S.result);
    end
end
end