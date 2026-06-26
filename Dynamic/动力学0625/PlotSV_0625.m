%% 绘图函数，绘制机器人在三维空间的结构示意图

function PlotSV_0625(LP,SV,varargin)

opts.Parent = [];
opts.ShowText = true;
opts.ClearAxes = true;
opts.ShowJointFrames = false;
opts.FrameScale = [];
opts.ShowFrameLabels = false;
for k = 1:2:numel(varargin)
    switch lower(varargin{k})
        case 'parent'
            opts.Parent = varargin{k+1};
        case 'showtext'
            opts.ShowText = varargin{k+1};
        case 'clearaxes'
            opts.ClearAxes = varargin{k+1};
        case 'showjointframes'
            opts.ShowJointFrames = varargin{k+1};
        case 'framescale'
            opts.FrameScale = varargin{k+1};
        case 'showframelabels'
            opts.ShowFrameLabels = varargin{k+1};
        otherwise
            error('PlotSV:UnknownOption', 'Unknown option: %s', varargin{k});
    end
end

if isempty(opts.Parent)
    figure;
    ax = gca;
else
    ax = opts.Parent;
end
if opts.ClearAxes
    cla(ax);
end
hold(ax, 'on'); grid(ax, 'on'); view(ax,[45 25]);
axis(ax, 'equal');
xlabel(ax, 'X/m'); ylabel(ax, 'Y/m'); zlabel(ax, 'Z/m');
title(ax, '机器人末端点三维分布（标注+相邻点连线）');

% 绘制基座,基座接口点
X_B = [];Y_B = [];Z_B = [];
for i = 1:4
    R_base = SV.A0*LP.PBcp;
    x_base = SV.R0(1) + R_base(1,mod(i-1,3)+1);
    y_base = SV.R0(2) + R_base(2,mod(i-1,3)+1);
    z_base = SV.R0(3) + R_base(3,mod(i-1,3)+1);
    X_B = [X_B x_base];Y_B = [Y_B y_base];Z_B = [Z_B z_base];
end
plot3(ax, X_B, Y_B, Z_B, 'k',...
    'LineWidth',2,'Marker','o','MarkerSize',4,'MarkerEdgeColor','k','MarkerFaceColor','none','DisplayName', '基座连接点');
if opts.ShowText
    for i = 1:3
        text(ax, X_B(i)+0.02, Y_B(i)+0.02, Z_B(i)+0.02,sprintf('(%.3f,%.3f,%.3f) 接口%d',X_B(i),Y_B(i),Z_B(i),i),'FontSize',6, 'Color','k');
    end
end

% 绘制节点，末端点
for i = 1:SV.m
    x = [X_B(i) SV.RR(1, SV.Path{i}) SV.POS_e{i}(1)];
    y = [Y_B(i) SV.RR(2, SV.Path{i}) SV.POS_e{i}(2)];
    z = [Z_B(i) SV.RR(3, SV.Path{i}) SV.POS_e{i}(3)];
    plot3(ax, x,y,z,'k','LineWidth',0.5,'MarkerFaceColor','none');
    for j = 1:length(SV.Path{i})
        if LP.J_type(SV.Path{i}(j)) == 'R'
            plot3(ax, x(j+1),y(j+1),z(j+1),'o','MarkerSize',6,'MarkerEdgeColor','r','MarkerFaceColor','r','LineStyle','none');
            if opts.ShowText
                text(ax, x(j+1)+0.02,y(j+1)+0.02,z(j+1)+0.02,sprintf('(%.3f,%.3f,%.3f)  module %d',x(j+1),y(j+1),z(j+1),LP.module(SV.Path{i}(j))),'FontSize',6, 'Color','m');
            end
        elseif LP.J_type(SV.Path{i}(j)) == 'L'
            plot3(ax, x(j+1),y(j+1),z(j+1),'o','MarkerSize',6,'MarkerEdgeColor','b','MarkerFaceColor','b','LineStyle','none');
            if opts.ShowText
                text(ax, x(j+1)+0.02,y(j+1)+0.02,z(j+1)+0.02,sprintf('(%.3f,%.3f,%.3f)  module %d',x(j+1),y(j+1),z(j+1),LP.module(SV.Path{i}(j))),'FontSize',6, 'Color',[0 0.75 0.75]);
            end
        end

    end
    plot3(ax, SV.POS_e{i}(1),SV.POS_e{i}(2),SV.POS_e{i}(3),'o','MarkerSize',6,'MarkerEdgeColor','k','MarkerFaceColor','k','LineStyle','none');
    if opts.ShowText
        text(ax, SV.POS_e{i}(1)+0.03,SV.POS_e{i}(2)+0.03,SV.POS_e{i}(3)+0.03,sprintf('(%.3f,%.3f,%.3f)  末端%d',SV.POS_e{i}(1),SV.POS_e{i}(2),SV.POS_e{i}(3),i),'FontSize',6, 'Color','k');
    end

end
if opts.ShowJointFrames
    draw_joint_frames(ax, LP, SV, opts.FrameScale, opts.ShowFrameLabels);
end

hold(ax, 'off');
end

function draw_joint_frames(ax, LP, SV, frame_scale, show_labels)
if isempty(frame_scale)
    frame_scale = estimate_frame_scale(LP, SV);
end
idx_q = LP.R_idx(1:LP.num_joint);
for j = 1:LP.num_joint
    idx = idx_q(j);
    O = SV.RR(:,idx);
    R = SV.AA(:,idx*3-2:idx*3);
    draw_axis(ax, O, R(:,1), frame_scale, [0.90 0.05 0.05]);
    draw_axis(ax, O, R(:,2), frame_scale, [0.05 0.62 0.15]);
    draw_axis(ax, O, R(:,3), frame_scale, [0.05 0.20 0.95]);
    if show_labels
        text(ax, O(1), O(2), O(3), sprintf(' J%d', j), ...
            'FontSize', 6, 'Color', [0.15 0.15 0.15], 'FontWeight', 'bold');
        label_axis(ax, O, R(:,1), frame_scale, sprintf('x%d', j), [0.90 0.05 0.05]);
        label_axis(ax, O, R(:,2), frame_scale, sprintf('y%d', j), [0.05 0.62 0.15]);
        label_axis(ax, O, R(:,3), frame_scale, sprintf('z%d', j), [0.05 0.20 0.95]);
    end
end
end

function draw_axis(ax, O, dir_vec, scale, color)
quiver3(ax, O(1), O(2), O(3), ...
    scale*dir_vec(1), scale*dir_vec(2), scale*dir_vec(3), ...
    0, 'Color', color, 'LineWidth', 1.4, 'MaxHeadSize', 0.65);
end

function label_axis(ax, O, dir_vec, scale, label, color)
p = O + 1.10 * scale * dir_vec;
text(ax, p(1), p(2), p(3), label, ...
    'FontSize', 7, 'Color', color, 'FontWeight', 'bold');
end

function frame_scale = estimate_frame_scale(LP, SV)
pts = SV.RR;
for i = 1:SV.m
    pts = [pts, SV.POS_e{i}(:)]; %#ok<AGROW>
end
if isfield(LP, 'PBcp')
    pts = [pts, SV.R0(:) + SV.A0 * LP.PBcp]; %#ok<AGROW>
end
span = max(max(pts, [], 2) - min(pts, [], 2));
if isempty(span) || span <= 0
    span = 1;
end
frame_scale = min(max(0.07 * span, 0.04), 0.15);
end
