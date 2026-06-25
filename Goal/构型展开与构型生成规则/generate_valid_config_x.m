%% 随机生成一个合法构型（通过 expand_module_units 检验）

function [n, module_raw, install_raw, align_raw, sequence_raw] = generate_valid_config_x(RP_data, iter_max)

if nargin < 2 || isempty(iter_max)
    iter_max = 1000;
end

is_found = false;

for iter = 1:iter_max
    %% 第一步：随机生成 mo, is, al, se
    n  = randi([3, 7]);
    mo = randi([1, 10], 1, n);
    is = ones(1, n);
    al = randi([0,2], 1, n);
    se = [0, 1:n-1];

    %% 第二步：用 expand_module_units 检验合法性
    [~, ~, ~, ~, ~, is_valid, ~] = expand_module_units(mo, is, al, se, RP_data);

    %% 第三步：合法则输出；不合法继续迭代
    if is_valid
        module_raw   = [mo, zeros(1, 7-n)];
        install_raw  = ones(1, 7);
        align_raw    = [al, zeros(1, 7-n)];
        sequence_raw = 0:6;

        is_found = true;
        break;
    end
end

if ~is_found
    error('generate_random_valid_config:MaxIterReached', ...
        '在 iter_max=%d 次迭代内未找到合法构型。', iter_max);
end

end
