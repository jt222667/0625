%% 针对分支编号为num_e的分支，提取分支上各个模块的顺序编号

function  joint = j_num(  LP , num_e )

n = length(LP.SE);
j = 0;

ie = zeros(3,1);

for i = 1 : n
   if LP.SE(i) == 1
      j = j + 1;
      ie(j) = i;   
   end
end

j_number = LP.BB(ie(num_e));
connection = [ie(num_e)];

while (j_number ~= 0)
   
   connection = [j_number connection];
   j_number = LP.BB(j_number);
   
end

joint = connection;

end