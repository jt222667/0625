%% 计算所有分支最大误差之和，此处误差指的是误差矩阵的模长

function sig_worst_all = calc_sig_worst_all(SV, LP, opts)

if nargin < 3
    opts = struct();
end
if ~isfield(opts, 'bound'),       opts.bound = [1e-3, 0, 0, 0]; end
if ~isfield(opts, 'max_iter'),    opts.max_iter = 30; end
if ~isfield(opts, 'restart_num'), opts.restart_num = 8; end

sig_worst_all = 0;
for i = 1 : SV.m
[~, sig_worst, ~] = fast_sqpji_worst_dhpara(SV, LP, i, opts);
sig_worst_all = sig_worst_all + sig_worst;

end
end

%% 快速搜索误差矩阵模长的极值及其对应的dhpara参数
function [q_worst, sig_worst, info] = fast_sqpji_worst_dhpara(SV, LP, k, opts)

if nargin < 4
    opts = struct();
end
if ~isfield(opts, 'bound'),       opts.bound = [1e-3, 0, 0, 0]; end
if ~isfield(opts, 'max_iter'),    opts.max_iter = 30; end
if ~isfield(opts, 'restart_num'), opts.restart_num = 8; end

idx_path = j_num(LP, k);
n = 4 * numel(idx_path);

%% 设置每组误差上下界
group_len = numel(idx_path);
if isscalar(opts.bound)
    b_group = repmat(abs(opts.bound), 1, 4);
else
    b_group = abs(opts.bound(:).');
    if numel(b_group) ~= 4
        error('opts.bound 必须是标量或 4 元素向量 [dtheta, da, dalpha, dd]。');
    end
end
b = [ ...
    repmat(b_group(1), group_len, 1); ...
    repmat(b_group(2), group_len, 1); ...
    repmat(b_group(3), group_len, 1); ...
    repmat(b_group(4), group_len, 1) ...
    ];

%% 构造线性映射矩阵 M（16 x n）
M = zeros(16, n);
for i = 1:n
    e = zeros(1, n);
    e(i) = 1;
    M(:, i) = reshape(calc_Accuracy_0519(LP, SV, k, e), [], 1); %
end

%% 一次主迭代
[x, iter_main] = local_sign_iter(M, b, opts.max_iter, b .* sign(randn(n, 1)));

%% 多次随机重启
best_x = x;
best_sig = norm(M * x);
iter_restarts = zeros(opts.restart_num, 1);
for r = 1:opts.restart_num
    x0 = b .* sign(randn(n, 1));
    [xr, iter_r] = local_sign_iter(M, b, opts.max_iter, x0);
    iter_restarts(r) = iter_r;
    sig_r = norm(M * xr);
    if sig_r > best_sig
        best_sig = sig_r;
        best_x = xr;
    end
end

q_worst = best_x.';
dT_worst = calc_Accuracy_0519(LP, SV, k, q_worst);
sig_worst = norm(dT_worst);

info = struct();
info.M = M;
info.n = n;
info.bound_group = b_group;
info.bound = b;
info.eval_count = n;
info.max_iter = opts.max_iter;
info.restart_num = opts.restart_num;
info.iter_main = iter_main;
info.iter_restarts = iter_restarts;
end

%% 迭代函数
function [x, iter_used] = local_sign_iter(M, b, max_iter, x0)
x = x0;
iter_used = 0;
for it = 1:max_iter
    y = M * x;
    yn = norm(y);
    if yn == 0
        iter_used = it;
        return;
    end
    u = y / yn;
    x_new = b .* sign(M' * u);
    iter_used = it;
    if all(x_new == x)
        return;
    end
    x = x_new;
end
end
