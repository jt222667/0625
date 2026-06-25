function [LP,SV] = build_calc_MCG_0625_mex()
%BUILD_CALC_MCG_0618_MEX Generate calc_MCG_0618_mex from calc_MCG_0618.m.
%
% Run from MATLAB:
%   build_calc_MCG_0618_mex
%
% The script puts this folder first on the MATLAB path so codegen uses
% the calc_MCG_0618.m next to this script instead of any same-named file.

clc;

this_dir = fileparts(mfilename('fullpath'));
project_root = fileparts(this_dir);
addpath(genpath(project_root));
addpath(this_dir, '-begin');
old_dir = pwd;
cleanup = onCleanup(@() cd(old_dir));
cd(this_dir);

source_file = which('calc_MCG_0618');
fprintf('Using source: %s\n', source_file);
if ~strcmp(source_file, fullfile(this_dir, 'calc_MCG_0618.m'))
    error('build_calc_MCG_0618_mex:WrongSource', ...
        'MATLAB path is not using the calc_MCG_0618.m in this folder.');
end

RP_data = Module_Lib();
[n, module_raw, install_raw, align_raw, sequence_raw] = generate_valid_config_x(RP_data);
[module_out, install_out, align_out, sequence_out] = expand_module_units( ...
    module_raw(1:n), install_raw(1:n), align_raw(1:n), sequence_raw(1:n), RP_data);

LP = LP_generate(module_out, install_out, align_out, sequence_out, RP_data);
SV = SV_generate(LP); %#ok<NASGU>
LP.rb = calc_Dy_Para_0612(LP);

if LP.num_joint ~= 7
    error('build_calc_MCG_0618_mex:BadJointCount', ...
        'calc_MCG_0618 is written for 7 joints, but generated LP.num_joint=%d.', ...
        LP.num_joint);
end

q = 0.3 * ones(LP.num_joint, 1); %#ok<NASGU>
qd = zeros(LP.num_joint, 1); %#ok<NASGU>

cfg = coder.config('mex');
cfg.GenerateReport = true;

codegen -config cfg calc_MCG_0618 ...
    -args {LP, SV, q, qd} ...
    -o calc_MCG_0618_mex ...
    -report

fprintf('Generated: %s\n', fullfile(this_dir, ['calc_MCG_0618_mex.', mexext]));
end
