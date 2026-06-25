
%% x1~x7存入cell数组
x = {x1,x2,x3,x4,x5,x6};

%% ================= 位置跟踪 =================
figure(1)
box on;
for i = 1:6
    subplot(6,1,i)
    plot(t,x{i}(:,1),'r','LineWidth',2)
    hold on
    plot(t,x{i}(:,2),'b','LineWidth',2)
    hold off
    ylabel(['关节',num2str(i)])
    if i == 1
        legend('输入轨迹','实际轨迹')
    end
end
xlabel('时间(s)')


%% ================= 跟踪误差 =================
figure(2)
box on;
hold on
for i = 1:6
    plot(t,x{i}(:,1)-x{i}(:,2),'LineWidth',2)
end
grid on
xlabel('时间(s)')
ylabel('误差(rad)')
legend('关节1','关节2','关节3','关节4','关节5','关节6')


%% ================= 力矩 =================
figure(3)
box on;
hold on
for i = 1:6
    plot(t,tol(:,i),'LineWidth',2)
end
grid on
xlabel('时间(s)')
ylabel('关节力矩(rad)')
legend('关节1','关节2','关节3','关节4','关节5','关节6')