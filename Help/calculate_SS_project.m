%% 计算拓扑邻接矩阵

function SS = calculate_SS_project(LP)

SS = zeros(LP.num_q,LP.num_q);

for i = 1:LP.num_q
    for j=1:LP.num_q
        if i==LP.BB(j)
            SS(i,j)=1;
        elseif i==j
            SS(i,j)=-1;
        else
            SS(i,j)=0;
        end
    end
end

