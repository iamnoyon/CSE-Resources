clc;
clear all;
close all;
fc=25;
fm=5;
t=0:0.001:1;
A=3;

x=A.*sin(2*pi*fc*t)+(A/2);
m=(A/2).*square(2*pi*fm*t)+(A/2);
v=x.*m;
subplot(3,1,1)
plot(t,x);
title('Carrier');
subplot(3,1,2)
plot(t,m);
title('Message');
subplot(3,1,3)
plot(t,v);
title('ASK');