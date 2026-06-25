%% SQP_main()用于求解在机器人构型参数SV、LP都确定的情况下，以机器人第k分支的末端的位姿必须与目标点Goal{k}重合的前提下，搜索能够使机器人第k分支末端的可操作度达到最大的关节角组合q_k，并返回第k分支可操作度

function [SV, flag, q_k, err_k, w_k] = SQP_main(LP, SV, Goal, k)

num_trials = 100;
reach_tol = 1e-4;

options = optimoptions('fmincon', ...
    'Display', 'off', ...
    'Algorithm', 'sqp', ...
    'MaxIterations', 300, ...
    'MaxFunctionEvaluations', 5000, ...
    'ConstraintTolerance', reach_tol, ...
    'OptimalityTolerance', 1e-8, ...
    'StepTolerance', 1e-10);

all_q_opt = cell(num_trials, 1);
all_fvals = Inf(num_trials, 1);
all_errs = Inf(num_trials, 1);
all_exitflags = zeros(num_trials, 1);

jtype = LP.J_type(SV.Path{k});
R_idx_k = SV.Path{k}(jtype == 'R');

q_lb = zeros(SV.singleArm_joints(k),1);
q_ub = 2*pi*ones(SV.singleArm_joints(k),1);
% q_lb(2) = -1.658; q_ub(1) = 1.658;
% q_lb(4) = -1.658; q_ub(4) = 1.658;
% q_lb(6) = -1.658; q_ub(6) = 1.658;

parfor m = 1:num_trials

    q_init = q_lb + (q_ub-q_lb).*rand(SV.singleArm_joints(k),1);

    [q_opt, fval, exitflag] = fmincon( ...
        @(q) SQP_cost(q, LP, SV, k, R_idx_k), ...
        q_init, [], [], [], [], q_lb, q_ub, ...
        @(q) SQP_constraint(q, LP, SV, Goal, k, R_idx_k), options);

    SV_candidate = Trans_aa_pos_k(LP, SV, q_opt, R_idx_k);
    candidate_err = calc_goal_err(SV_candidate, Goal, k);

    all_q_opt{m} = q_opt(:);
    all_fvals(m) = fval;
    all_errs(m) = candidate_err;
    all_exitflags(m) = exitflag;

end

% 优先选择满足位置等式约束的候选解，并在其中按可操作度目标函数最优选解；
% 若所有候选都不可达，则返回位置误差最小的候选，用于上层评价惩罚。
feasible_idx = find((all_errs <= reach_tol) & (all_exitflags > 0));
if isempty(feasible_idx)
    feasible_idx = find(all_errs <= reach_tol);
end

if ~isempty(feasible_idx)
    [~, tie_idx] = min(all_fvals(feasible_idx));
    best_idx = feasible_idx(tie_idx);
else
    min_err = min(all_errs);
    best_candidates = find(all_errs <= min_err + 1e-12);
    [~, tie_idx] = min(all_fvals(best_candidates));
    best_idx = best_candidates(tie_idx);
end

q_sol = all_q_opt{best_idx};
SV = Trans_aa_pos_k(LP, SV, q_sol, R_idx_k);
err_k = calc_goal_err(SV, Goal, k);

q_k = q_sol;

% flag ：0 表示可达，1 表示不可达。
flag = err_k > reach_tol;
w_k = -all_fvals(best_idx);
fprintf(' flag  = %d, err_k = %.6g, w_k = %.6g\n', flag, err_k, w_k);

end


function candidate_err = calc_goal_err(SV, Goal, k)
candidate_err = norm(Goal.POS_e{k}(:) - SV.POS_e{k}(:)) + ...
    norm(Goal.ORI_e{k} - SV.ORI_e{k});
end