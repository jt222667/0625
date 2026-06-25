function [sub_module, sub_align] = split_joint_chain(module, align)

joint_ids = [1 2 3 4];

is_joint = ismember(module, joint_ids);
joint_pos = find(is_joint);

n_seg = length(joint_pos) - 1;

sub_module = cell(1, n_seg);
sub_align  = cell(1, n_seg);

for i = 1:n_seg
    idx1 = joint_pos(i);
    idx2 = joint_pos(i+1);

    sub_module{i} = module(idx1:idx2);
    sub_align{i}  = align(idx1:idx2);
end
end