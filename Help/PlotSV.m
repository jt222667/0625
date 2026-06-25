%% 绘图函数，绘制机器人在三维空间的结构示意图

function PlotSV(LP,SV)

figure; hold on; grid on; view([90 0]);
axis equal;
xlabel('X/m'); ylabel('Y/m'); zlabel('Z/m');
title('机器人末端点三维分布（标注+相邻点连线）');
colors = {'r', 'g', 'b', 'c', 'm', 'y', 'k'};

% 绘制基座,基座接口点
X_B = [];Y_B = [];Z_B = [];
for i = 1:4
    R_base = SV.A0*LP.PBcp;
    x_base = SV.R0(1) + R_base(1,mod(i-1,3)+1);
    y_base = SV.R0(2) + R_base(2,mod(i-1,3)+1);
    z_base = SV.R0(3) + R_base(3,mod(i-1,3)+1);
    X_B = [X_B x_base];Y_B = [Y_B y_base];Z_B = [Z_B z_base];
end
plot3(X_B, Y_B, Z_B, 'k',...
    'LineWidth',3,'Marker','o','MarkerSize',5,'MarkerEdgeColor','k','MarkerFaceColor','none','LineStyle',':','DisplayName', '基座连接点');
for i = 1:3
    text(X_B(i)+0.02, Y_B(i)+0.02, Z_B(i)+0.02,sprintf('(%.3f,%.3f,%.3f) 接口%d',X_B(i),Y_B(i),Z_B(i),i),'FontSize',8, 'Color','k');
end

% 绘制节点，末端点
for i = 1:SV.m
    x = [X_B(i) SV.RR(1, SV.Path{i}) SV.POS_e{i}(1)];
    y = [Y_B(i) SV.RR(2, SV.Path{i}) SV.POS_e{i}(2)];
    z = [Z_B(i) SV.RR(3, SV.Path{i}) SV.POS_e{i}(3)];
    plot3(x,y,z,colors{i},'LineWidth',2,'MarkerEdgeColor','y','MarkerFaceColor','none','LineStyle',':');
    for j = 1:length(SV.Path{i})
        if LP.J_type(SV.Path{i}(j)) == 'R'
            plot3(x(j+1),y(j+1),z(j+1),'o','MarkerSize',8,'MarkerEdgeColor','m','MarkerFaceColor','m','LineStyle','none');
            text(x(j+1)+0.02,y(j+1)+0.02,z(j+1)+0.02,sprintf('(%.3f,%.3f,%.3f)  module %d',x(j+1),y(j+1),z(j+1),LP.module(SV.Path{i}(j))),'FontSize',8, 'Color','m');
        elseif LP.J_type(SV.Path{i}(j)) == 'L'
            plot3(x(j+1),y(j+1),z(j+1),'o','MarkerSize',8,'MarkerEdgeColor',[0 0.75 0.75],'MarkerFaceColor',[0 0.75 0.75],'LineStyle','none');
            text(x(j+1)+0.02,y(j+1)+0.02,z(j+1)+0.02,sprintf('(%.3f,%.3f,%.3f)  module %d',x(j+1),y(j+1),z(j+1),LP.module(SV.Path{i}(j))),'FontSize',8, 'Color',[0 0.75 0.75]);
        end

    end
    plot3(SV.POS_e{i}(1),SV.POS_e{i}(2),SV.POS_e{i}(3),'o','MarkerSize',8,'MarkerEdgeColor','k','MarkerFaceColor','k','LineStyle','none');
    text(SV.POS_e{i}(1)+0.03,SV.POS_e{i}(2)+0.03,SV.POS_e{i}(3)+0.03,sprintf('(%.3f,%.3f,%.3f)  末端%d',SV.POS_e{i}(1),SV.POS_e{i}(2),SV.POS_e{i}(3),i),'FontSize',8, 'Color','k');

end
end