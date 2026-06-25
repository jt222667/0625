function [q, qd, qdd] = quintic_traj_0625(t, q0, qf, T)
t = max(0, min(t, T));
s = t ./ T;
q = q0 + (qf - q0) .* ...
    (10*s.^3 - 15*s.^4 + 6*s.^5);
qd = (qf - q0) ./ T .* ...
    (30*s.^2 - 60*s.^3 + 30*s.^4);
qdd = (qf - q0) ./ T.^2 .* ...
    (60*s - 180*s.^2 + 120*s.^3);
end

% figure;
% plot(t, q, 'LineWidth', 1.5); hold on;
% plot(t, qd, 'LineWidth', 1.5);
% plot(t, qdd, 'LineWidth', 1.5);
% grid on;
% legend('q', 'qd', 'qdd');
% xlabel('t / s');
