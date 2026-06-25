clc;clear;close all;

i = 544;
msg = sprintf('F:\\Archive 归档\\0528\\myproblem\\data\\result_run_%d.mat',i);
load(msg);
result_final = result;

[result_final, order] = Sample_Rich(result_final,i);

text_pos = [-4.2, 0.009, 10];
plot_pareto_smooth_2(result_final.fval, text_pos);


