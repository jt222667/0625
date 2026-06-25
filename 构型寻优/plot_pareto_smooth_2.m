function plot_pareto_smooth_2(data, text_pos)

if nargin < 2
    text_pos = [3, -0.0008, 10.6]; % 默认位置
end


%% =========================
% 数据拆分
%% ========================= 
x = -data(:,1);
y = data(:,2);
z = data(:,3);

%% =========================
% 自动识别分组
%% =========================
unique_z = unique(z);

fprintf('自动识别分组 Z值：');
disp(unique_z');

%% =========================
% 颜色设置（对齐 plot_fitted_surface）
%% =========================
colors = turbo(length(unique_z));

% 第一个颜色改为紫色
colors(1,:) = [0.55 0.00 0.80];

%% =========================
% 图窗设置
%% =========================
figure('Color','w', ...
    'Position',[100,100,930,780]);

hold on;
grid on;
box on;

%% =========================
% 图例初始化
%% =========================
h_handles = [];
legend_str = {};

%% =========================
% 循环绘制每个复杂度层
%% =========================
for i = 1:length(unique_z)

    % 当前层索引
    idx = (z == unique_z(i));

    xi = x(idx);
    yi = y(idx);
    zi = z(idx);

    % 按 x 排序
    [xi, order] = sort(xi);

    yi = yi(order);
    zi = zi(order);

    % 去除重复 x
    [xi_unique, ia] = unique(xi);

    yi_unique = yi(ia);

    %% =========================
    % 当前颜色
    %% =========================
    line_color  = colors(i,:);
    point_color = max(line_color * 0.65, 0);

    %% =========================
    % 判断是否可以插值
    %% =========================
    if length(xi_unique) >= 2

        % 平滑插值
        xx = linspace(min(xi_unique), ...
            max(xi_unique), 250);

        yy = interp1(xi_unique, yi_unique, ...
            xx, 'pchip');

        zz = unique_z(i) * ones(size(xx));

        % 绘制平滑曲线
        h = plot3(xx, yy, zz, ...
            'Color',     line_color, ...
            'LineWidth', 2.5);

    else

        % 只有一个点时直接绘制
        h = plot3(xi_unique, yi_unique, unique_z(i), ...
            'o', ...
            'Color',           line_color, ...
            'MarkerFaceColor', line_color, ...
            'MarkerSize',      7, ...
            'LineWidth',       1.2);

    end

    %% =========================
    % 原始散点
    %% =========================
    scatter3(xi, yi, zi, ...
        45, ...
        'filled', ...
        'MarkerFaceColor', point_color, ...
        'MarkerEdgeColor', max(point_color*0.7,0), ...
        'LineWidth',       0.7);

    %% =========================
    % 图例
    %% =========================
    h_handles = [h_handles, h];

    legend_str{i} = sprintf('ρ = %.0f', unique_z(i));

end

%% =========================
% 图例设置
%% =========================
legend(h_handles, legend_str, ...
    'Location',   'eastoutside', ...
    'FontName',   'Times New Roman', ...
    'FontWeight', 'normal', ...
    'FontSize',   16, ...
    'NumColumns', 1);

%% =========================
% 坐标轴设置
%% =========================
ax = gca;

ax.FontName   = 'Times New Roman';
ax.FontSize   = 18;
ax.FontWeight = 'normal';
ax.Box        = 'on';

% X轴刻度
ax.XTick = min(ax.XLim):1:max(ax.XLim);

% Y轴刻度
ax.YTick = min(ax.YLim):0.001:max(ax.YLim);

% 去掉科学计数法
ax.YAxis.Exponent = 0;

% 小数显示格式
ax.YAxis.TickLabelFormat = '%.3f';

% Z轴刻度
ax.ZTick = min(ax.ZLim):1:max(ax.ZLim);

%% =========================
% 坐标轴标签
%% =========================
xl = xlabel('可操作度指标', ...
    'FontSize',   22, ...
    'FontWeight', 'normal', ...
    'FontName',   '宋体');

set(xl,'Rotation',-24);

zlabel('结构复杂度指标', ...
    'FontSize',   22, ...
    'FontWeight', 'normal', ...
    'FontName',   '宋体');

%% =========================
% 自动收紧坐标轴
%% =========================
pad_x = 0.1 * range(x);
pad_y = 0.1 * range(y);
pad_z = 0.1 * range(z);

xlim([min(x)-pad_x, max(x)+pad_x]);
ylim([min(y)-pad_y, max(y)+pad_y]);
zlim([min(z)-pad_z, max(z)+pad_z]);

%% =========================
% 文本标签（可通过 text_pos 调整位置）
%% =========================
if nargin < 2
    % 默认位置
    text_pos = [-4.7, 0.0077, 13];
end

text( ...
    text_pos(1), ...
    text_pos(2), ...
    text_pos(3), ...
    '最大定位误差指标', ...
    'FontSize',22,...
    'FontWeight','normal',...
    'FontName','宋体',...
    'Rotation',24);

%% =========================
% 视图与光照
%% =========================
axis normal;

camlight headlight;
lighting gouraud;

view(225,25);

hold off;

end