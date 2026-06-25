clc;
clear;
close all;

%% =========================
% 生成N个随机误差数据
% 主体分布：1e-7 ~ 1e-12
% 7.5%数据分布在1e-5和1e-4附近
% 2.5%数据分布在1e-12附近
% 且位置随机、不均匀
%% =========================

N = 100;

% 原始主体数据
error_data = 10.^(-12 + 5*rand(1,N));

%% =========================
% 7.5% 高值数据（1e-5 ~ 1e-4）
%% =========================

high_num = round(0.025 * N);

% 随机选取位置
idx_high = randperm(N, high_num);

% 生成高值数据
error_data(idx_high) = 10.^(-7 + 3*rand(1,high_num));

%% =========================
% 2.5% 超低值数据（1e-12附近）
%% =========================

low_num = round(0.01 * N);

% 剩余位置中随机选取
remain_idx = setdiff(1:N, idx_high);

idx_low = remain_idx(randperm(length(remain_idx), low_num));

% 生成超低值数据
error_data(idx_low) = 10.^(-14 + 1*rand(1,low_num));


%% =========================
% 1% 数据分布在 1e-13 附近
%% =========================

mid_num = round(0.01 * N);

% 从剩余位置继续随机选取
remain_idx = setdiff(1:N, [idx_high idx_low]);

idx_mid = remain_idx(randperm(length(remain_idx), mid_num));

% 生成 1e-13 附近数据
error_data(idx_mid) = 10.^(-13 + 1*rand(1,mid_num));

%% =========================
% 绘制误差图（log纵轴）
%% =========================
x = 1:N;

figure('Color','w');

semilogy(x, error_data, ...
    'o-', ...
    'LineWidth',1.2, ...
    'MarkerSize',4, ...
    'MarkerFaceColor',[0.2 0.5 0.9]);

% title('对数尺度误差图','FontSize',14);

% grid on;
box on;

set(gca,...
    'FontSize',15,...
    'LineWidth',1,...
    'YScale','log');

xlabel('构型编号', ...
    'FontSize',23, ...
    'FontName','宋体');

ylabel('位姿误差', ...
    'FontSize',23, ...
    'FontName','宋体');

ylim([1e-16 1e-3]);   
xlim([0 100]);        

pbaspect([2 1 1])



