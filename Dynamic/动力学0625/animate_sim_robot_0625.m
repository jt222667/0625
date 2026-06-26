function animate_sim_robot_0625(varargin)
%ANIMATE_SIM_ROBOT_0625 Animate Sim_0625 joint results with PlotSV_0625.
%
% After running Sim_0625.mdl, this function reads x1...x7 from the base
% workspace, extracts column 2 as actual joint angles, and exports a GIF or
% MP4 animation of the robot configuration over the simulation time.
%
% Examples:
%   animate_sim_robot_0625
%   animate_sim_robot_0625('FrameStep', 5)
%   animate_sim_robot_0625('PlaybackSpeed', 10)
%   animate_sim_robot_0625('LoopCount', 1)
%   animate_sim_robot_0625('TimeRange', [0 5])
%   animate_sim_robot_0625('ShowJointFrames', true, 'FrameScale', 0.08)
%   animate_sim_robot_0625('OutputFile', 'robot_motion.mp4', 'FrameRate', 30)

opts.OutputFile = fullfile(fileparts(mfilename('fullpath')), 'robot_motion.gif');
opts.FrameStep = [];
opts.FrameRate = 30;
opts.PlaybackSpeed = 5;
opts.MaxFrames = 600;
opts.LoopCount = 1;
opts.TimeRange = [];
opts.ActualColumn = 2;
opts.ShowText = false;
opts.ShowJointFrames = true;
opts.FrameScale = [];
opts.ShowFrameLabels = false;
opts.FigureVisible = true;
opts.KeepFigure = true;
opts.AxisLimits = [];
opts.AxisPadding = 0.12;

for k = 1:2:numel(varargin)
    switch lower(varargin{k})
        case 'outputfile'
            opts.OutputFile = varargin{k+1};
        case 'framestep'
            opts.FrameStep = varargin{k+1};
        case 'framerate'
            opts.FrameRate = varargin{k+1};
        case 'playbackspeed'
            opts.PlaybackSpeed = varargin{k+1};
        case 'maxframes'
            opts.MaxFrames = varargin{k+1};
        case 'loopcount'
            opts.LoopCount = varargin{k+1};
        case 'timerange'
            opts.TimeRange = varargin{k+1};
        case 'actualcolumn'
            opts.ActualColumn = varargin{k+1};
        case 'showtext'
            opts.ShowText = varargin{k+1};
        case 'showjointframes'
            opts.ShowJointFrames = varargin{k+1};
        case 'framescale'
            opts.FrameScale = varargin{k+1};
        case 'showframelabels'
            opts.ShowFrameLabels = varargin{k+1};
        case 'figurevisible'
            opts.FigureVisible = varargin{k+1};
        case 'keepfigure'
            opts.KeepFigure = varargin{k+1};
        case 'axislimits'
            opts.AxisLimits = varargin{k+1};
        case 'axispadding'
            opts.AxisPadding = varargin{k+1};
        otherwise
            error('animate_sim_robot_0625:UnknownOption', ...
                'Unknown option: %s', varargin{k});
    end
end

if ~isempty(opts.FrameStep)
    validateattributes(opts.FrameStep, {'numeric'}, ...
        {'scalar','integer','positive'}, mfilename, 'FrameStep');
end
validateattributes(opts.FrameRate, {'numeric'}, ...
    {'scalar','positive'}, mfilename, 'FrameRate');
validateattributes(opts.PlaybackSpeed, {'numeric'}, ...
    {'scalar','positive'}, mfilename, 'PlaybackSpeed');
validateattributes(opts.MaxFrames, {'numeric'}, ...
    {'scalar','integer','positive'}, mfilename, 'MaxFrames');
validateattributes(opts.LoopCount, {'numeric'}, ...
    {'scalar','nonnegative'}, mfilename, 'LoopCount');
if ~isempty(opts.TimeRange)
    validateattributes(opts.TimeRange, {'numeric'}, ...
        {'vector','numel',2,'real','finite'}, mfilename, 'TimeRange');
    if opts.TimeRange(2) <= opts.TimeRange(1)
        error('animate_sim_robot_0625:BadTimeRange', ...
            'TimeRange must be [t_start t_end] with t_end > t_start.');
    end
end
validateattributes(opts.ActualColumn, {'numeric'}, ...
    {'scalar','integer','positive'}, mfilename, 'ActualColumn');
if ~isempty(opts.AxisLimits)
    validateattributes(opts.AxisLimits, {'numeric'}, ...
        {'size',[3,2],'real','finite'}, mfilename, 'AxisLimits');
    if any(opts.AxisLimits(:,2) <= opts.AxisLimits(:,1))
        error('animate_sim_robot_0625:BadAxisLimits', ...
            'AxisLimits must be a 3x2 matrix: [xmin xmax; ymin ymax; zmin zmax].');
    end
end
validateattributes(opts.AxisPadding, {'numeric'}, ...
    {'scalar','nonnegative'}, mfilename, 'AxisPadding');

LP = read_base_var('LP');
SV0 = read_base_var('SV');

nq = LP.num_joint;
x = cell(1, nq);
for i = 1:nq
    x{i} = to_numeric_matrix(read_base_var(sprintf('x%d', i)));
    if size(x{i}, 2) < opts.ActualColumn
        error('animate_sim_robot_0625:BadXData', ...
            'x%d has only %d columns; cannot read column %d.', ...
            i, size(x{i}, 2), opts.ActualColumn);
    end
end

num_samples = min(cellfun(@(a) size(a,1), x));
q_actual = zeros(num_samples, nq);
for i = 1:nq
    q_actual(:, i) = x{i}(1:num_samples, opts.ActualColumn);
end

if evalin('base', 'exist(''t'',''var'')')
    t = to_numeric_matrix(evalin('base', 't'));
    t = t(:);
    if numel(t) >= num_samples
        t = t(1:num_samples);
    else
        t = (0:num_samples-1).';
    end
else
    t = (0:num_samples-1).';
end

if ~isempty(opts.TimeRange)
    keep = t >= opts.TimeRange(1) & t <= opts.TimeRange(2);
    if ~any(keep)
        error('animate_sim_robot_0625:EmptyTimeRange', ...
            'No samples found in TimeRange [%.6g %.6g].', ...
            opts.TimeRange(1), opts.TimeRange(2));
    end
    q_actual = q_actual(keep, :);
    t = t(keep);
    num_samples = numel(t);
end

if isempty(opts.FrameStep)
    sim_duration = t(end) - t(1);
    if sim_duration > 0
        playback_duration = sim_duration / opts.PlaybackSpeed;
        target_frames = ceil(playback_duration * opts.FrameRate) + 1;
    else
        target_frames = min(num_samples, opts.FrameRate * 5);
    end
    target_frames = min([num_samples, opts.MaxFrames, max(2, target_frames)]);
    frame_idx = unique(round(linspace(1, num_samples, target_frames)));
else
    frame_idx = 1:opts.FrameStep:num_samples;
    if frame_idx(end) ~= num_samples
        frame_idx = [frame_idx, num_samples];
    end
end

if isempty(opts.AxisLimits)
    axis_limits = compute_axis_limits(LP, SV0, q_actual(frame_idx, :), opts.AxisPadding);
else
    axis_limits = opts.AxisLimits;
end

out_dir = fileparts(opts.OutputFile);
if ~isempty(out_dir) && ~exist(out_dir, 'dir')
    mkdir(out_dir);
end

if opts.FigureVisible
    fig_visible = 'on';
else
    fig_visible = 'off';
end
fig = figure('Color', 'w', 'Name', 'Sim_0625 robot animation', ...
    'Visible', fig_visible, 'Units', 'pixels', 'Position', [100 100 900 700]);
ax = axes(fig);
cleanup_fig = onCleanup(@() close_created_figure(fig, opts.KeepFigure));

[~,~,ext] = fileparts(opts.OutputFile);
is_mp4 = strcmpi(ext, '.mp4') || strcmpi(ext, '.avi');
if is_mp4
    writer = VideoWriter(opts.OutputFile, video_profile(ext));
    writer.FrameRate = opts.FrameRate;
    open(writer);
else
    writer = [];
end

for k = 1:numel(frame_idx)
    idx = frame_idx(k);
    if ~isgraphics(fig, 'figure') || ~isgraphics(ax, 'axes')
        [fig, ax] = create_animation_axes(fig_visible);
    end
    SV = Trans_aa_pos_ori(LP, SV0, q_actual(idx, :));
    draw_animation_frame(ax, LP, SV, opts, axis_limits, t(idx), k, numel(frame_idx));

    try
        frame = capture_animation_frame(fig, ax);
    catch ME
        if strcmp(ME.identifier, 'animate_sim_robot_0625:InvalidGraphicsHandle') || ...
                strcmp(ME.identifier, 'animate_sim_robot_0625:InvalidFigureHandle')
            [fig, ax] = create_animation_axes(fig_visible);
            draw_animation_frame(ax, LP, SV, opts, axis_limits, t(idx), k, numel(frame_idx));
            frame = capture_animation_frame(fig, ax);
        else
            rethrow(ME);
        end
    end
    if is_mp4
        writeVideo(writer, frame);
    else
        [A, map] = rgb2ind(frame2im(frame), 256);
        if k == 1
            imwrite(A, map, opts.OutputFile, 'gif', 'LoopCount', opts.LoopCount, ...
                'DelayTime', 1 / opts.FrameRate);
        else
            imwrite(A, map, opts.OutputFile, 'gif', 'WriteMode', 'append', ...
                'DelayTime', 1 / opts.FrameRate);
        end
    end
end

if is_mp4
    close(writer);
end

fprintf('Animation saved to:\n%s\n', opts.OutputFile);
end

function value = read_base_var(name)
if ~evalin('base', sprintf('exist(''%s'',''var'')', name))
    error('animate_sim_robot_0625:MissingBaseVar', ...
        'Base workspace variable "%s" does not exist. Run init_mex_0625 and Sim_0625 first.', ...
        name);
end
value = evalin('base', name);
end

function data = to_numeric_matrix(value)
if isa(value, 'timeseries')
    data = value.Data;
elseif isstruct(value) && isfield(value, 'signals')
    data = value.signals.values;
else
    data = value;
end
data = squeeze(data);
if ~isnumeric(data)
    error('animate_sim_robot_0625:BadDataType', ...
        'Simulation data must be numeric, timeseries, or structure-with-time.');
end
end

function limits = compute_axis_limits(LP, SV0, q_samples, padding_ratio)
pts = [];
base_pts = SV0.R0(:) + SV0.A0 * LP.PBcp;
pts = [pts, base_pts]; %#ok<AGROW>
for k = 1:size(q_samples, 1)
    SV = Trans_aa_pos_ori(LP, SV0, q_samples(k, :));
    pts = [pts, SV.RR]; %#ok<AGROW>
    for i = 1:SV.m
        pts = [pts, SV.POS_e{i}(:)]; %#ok<AGROW>
    end
end
mins = min(pts, [], 2);
maxs = max(pts, [], 2);
center = (mins + maxs) / 2;
span = max(maxs - mins);
if span <= 0
    span = 1;
end
margin = padding_ratio * span + 0.05;
limits = [center(1)-span/2-margin, center(1)+span/2+margin; ...
          center(2)-span/2-margin, center(2)+span/2+margin; ...
          center(3)-span/2-margin, center(3)+span/2+margin];
end

function apply_axis_limits(ax, limits)
axis(ax, 'equal');
xlim(ax, limits(1,:));
ylim(ax, limits(2,:));
zlim(ax, limits(3,:));
set(ax, 'XLimMode', 'manual', 'YLimMode', 'manual', 'ZLimMode', 'manual');
set(ax, 'DataAspectRatio', [1 1 1], 'DataAspectRatioMode', 'manual');
axis(ax, 'manual');
grid(ax, 'on');
end

function profile = video_profile(ext)
if strcmpi(ext, '.avi')
    profile = 'Motion JPEG AVI';
else
    profile = 'MPEG-4';
end
end

function frame = capture_animation_frame(fig, ax)
if ~isgraphics(fig, 'figure') || ~isgraphics(ax, 'axes')
    error('animate_sim_robot_0625:InvalidGraphicsHandle', ...
        'The animation figure or axes handle is no longer valid.');
end
drawnow;
try
    frame = getframe(ax);
catch
    if ~isgraphics(fig, 'figure')
        error('animate_sim_robot_0625:InvalidFigureHandle', ...
            'The animation figure was closed before getframe could capture it.');
    end
    frame = getframe(fig);
end
end

function [fig, ax] = create_animation_axes(fig_visible)
fig = figure('Color', 'w', 'Name', 'Sim_0625 robot animation', ...
    'Visible', fig_visible, 'Units', 'pixels', 'Position', [100 100 900 700]);
ax = axes(fig);
end

function draw_animation_frame(ax, LP, SV, opts, axis_limits, t_now, frame_no, frame_total)
if ~isgraphics(ax, 'axes')
    error('animate_sim_robot_0625:InvalidGraphicsHandle', ...
        'The animation axes handle is no longer valid.');
end
PlotSV_0625(LP, SV, ...
    'Parent', ax, ...
    'ShowText', opts.ShowText, ...
    'ClearAxes', true, ...
    'ShowJointFrames', opts.ShowJointFrames, ...
    'FrameScale', opts.FrameScale, ...
    'ShowFrameLabels', opts.ShowFrameLabels);
apply_axis_limits(ax, axis_limits);
title(ax, sprintf('Robot configuration, t = %.3f s, frame %d/%d', ...
    t_now, frame_no, frame_total));
drawnow;
end

function close_created_figure(fig, keep_figure)
if ~keep_figure && isgraphics(fig, 'figure')
    close(fig);
end
end
