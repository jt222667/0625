%UNTITLED 此处显示有关此函数的摘要
%   此处显示详细说明
project_root = fileparts(mfilename('fullpath'));
if isempty(project_root)
    project_root = pwd;
end
addpath(genpath(project_root));

