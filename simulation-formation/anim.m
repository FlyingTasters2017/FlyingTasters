h1 =animatedline('Marker','x','Color','r','LineWidth',10);
  h2 =animatedline('Marker','x','Color','b','LineWidth',10);
  h3 =animatedline('Marker','x','Color','g','LineWidth',10);
axis([-4,4,-4,4,0,2])
grid on

for k = 1:length(state(:,1))
   
    addpoints(h1,state(k,1),state(k,2),state(k,3));
     addpoints(h2,state1(k,1),state1(k,2),state1(k,3));
     addpoints(h3,state2(k,1),state2(k,2),state2(k,3));
     k=k+1;
     addpoints(h1,state(k,1),state(k,2),state(k,3));
     addpoints(h2,state1(k,1),state1(k,2),state1(k,3));
     addpoints(h3,state2(k,1),state2(k,2),state2(k,3));
      k=k+2;
     addpoints(h1,state(k,1),state(k,2),state(k,3));
     addpoints(h2,state1(k,1),state1(k,2),state1(k,3));
     addpoints(h3,state2(k,1),state2(k,2),state2(k,3));
    drawnow
   clearpoints(h1);
    clearpoints(h2);
    clearpoints(h3);
end
figure(2)
 plot(state(:,1),state(:,2))
hold on
plot(state1(:,1),state1(:,2))
plot(state2(:,1),state2(:,2))    

figure(3)
plot(t,state(:,3))
hold on
plot(t,state1(:,3))
plot(t,state2(:,3))

figure(4)
plot(t,state(:,4))
plot(t,state1(:,4))
plot(t,state2(:,4))

figure(5)
hold on
plot(t,pwm1(:,1))
plot(t,pwm1(:,2))
plot(t,pwm1(:,3))
plot(t,pwm1(:,4))

      