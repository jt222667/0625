mdl_puma560
p560.gravity = [0 0 -9.81];

t = linspace(0,10,1000);
[q, qd, qdd] = quintic_traj_0625(t, 0, pi/2, 10);

i = 995;

qt_scalar   = q(i);
qdt_scalar  = qd(i);
qddt_scalar = qdd(i);

qt   = qt_scalar   * ones(1,6);
qdt  = qdt_scalar  * ones(1,6);
qddt = qddt_scalar * ones(1,6);

tau = p560.rne(qt, qdt, qddt);

M = p560.inertia(qt);
G = p560.gravload(qt);
Cqd = p560.rne(qt, qdt, zeros(1,6)) - G;