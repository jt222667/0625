%% 计算各新刚体的动力学参数，新刚体定义为：两个关节之间的刚体

function rb = calc_Dy_Para_0625(LP, RP_data)
align_og = LP.align/(2*pi/3);
[sub_module, sub_align] = split_joint_chain(LP.module, align_og);
rb(LP.num_joint) = struct('m', [], 'rc', [], 'I', []);
for i = 1:LP.num_joint-1
    [rb(i).m, rb(i).rc, rb(i).I] = calc_rigid_body_params_0625(sub_module{i}, sub_align{i}, RP_data);
end
module_end = LP.module(end);
rb(end).m = LP.module_mass_dist(module_end);
rb(end).rc = LP.module_COM_dist(:,module_end);
rb(end).I = LP.module_inertia_dist(:,:,module_end);

end
