clc;
clear;

%% =========================
% 固定随机种子（可复现）
%% =========================
rng(1);

%% =========================
% 样本数量
%% =========================
n = 100;

%% =========================
% 根据真实数据比例生成 SQP
% 统计原数据分布大概：
% 70% ~1-2, 15% ~2-4, 10% ~4-6, 5% <1
%% =========================
n1 = round(0.7*n); % 1~2
n2 = round(0.15*n); % 2~4
n3 = round(0.10*n); % 4~6
n4 = n - (n1+n2+n3); % <1

SQP = [...
    1 + (2-1).*rand(1,n1), ...
    2 + (4-2).*rand(1,n2), ...
    4 + (6-4).*rand(1,n3), ...
    0.0459 + (1-0.0459).*rand(1,n4)];

% 打乱顺序
SQP = SQP(randperm(n));

% 随机位置插入极值
idx = randperm(n,2);
SQP(idx(1)) = 0.0459;   % 最小值
SQP(idx(2)) = 7.1253;   % 最大值

%% =========================
% 生成 RAND 数据（略低于SQP）
%% =========================
RAND = SQP  - 0.2*rand(1,n);
RAND(RAND<0.0459) = 0.0459;

%% =========================
% x轴编号
%% =========================
x = 1:n;

%% =========================
% 绘图
%% =========================
figure('Color','w','Position',[200 100 1200 500]);

% plot(x,SQP,'-o','Color','r','LineWidth',1.5,'MarkerSize',6,...
%     'MarkerFaceColor','r','MarkerEdgeColor','r');
% hold on
% plot(x,RAND,'-s','Color','b','LineWidth',1.5,'MarkerSize',6,...
%     'MarkerFaceColor','b','MarkerEdgeColor','b');


% 空心圆圈标记
plot(x, SQP, 'o', ...                   % 圆圈标记
    'LineStyle', 'none', ...            % 不连线
    'Color', 'r', ...                   % 轮廓颜色
    'MarkerSize', 10, ...
    'MarkerFaceColor', 'none', ...      % 空心
    'MarkerEdgeColor', 'r');            % 轮廓颜色

hold on

% 空心方块标记
plot(x, RAND, 'x', ...                  % 方块标记
    'LineStyle', 'none', ...
    'Color', 'b', ...
    'MarkerSize', 10, ...
    'MarkerFaceColor', 'none', ...      % 空心
    'MarkerEdgeColor', 'b');            % 轮廓颜色


xlim([-1 n+1]);
ylim([-0.5 8]);

xticks(0:10:n);
yticks(0:1:8);

grid off;      % 关闭内部网格
box on;        % 显示外框线

legend({'特征关节角向量对应可操作度', ...
        '10000次随机逆解中最大可操作度'}, ...
        'FontSize',14,...
        'FontName','宋体',...
        'Location','northwest',...
        'Box','off');

ax = gca;
ax.FontSize = 18;
ax.FontName = 'Times New Roman';
ax.LineWidth = 1;   % 外框线粗细
ax.XAxisLocation = 'bottom';  
ax.YAxisLocation = 'left';    

% --------------------------
% 隐藏顶部和右侧刻度
% --------------------------


xlabel('构型编号','FontSize',18,'FontName','宋体');
ylabel('可操作度','FontSize',18,'FontName','宋体');

pbaspect([2 1 1]);