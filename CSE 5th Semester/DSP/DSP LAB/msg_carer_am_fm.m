clc;
clear all;
close all;
t = 0:0.01:10;

fm = 0.6;
Am = 2;

y1 = Am*sin(2*pi*fm*t);
subplot(2,2,1)
plot(t,y1);
title('Message Signal')
xlabel('Time')
ylabel('Message Amplitude')


fc = 1.3;
Ac = 9;
y2 = Ac*sin(2*pi*fc*t);
subplot(2,2,2)
plot(t,y2,'r');
title('Carrier Signal')
xlabel('Time')
ylabel('Carrier Amplitude')

m=1;
y3 = Ac*(1 + m.*sin(2*pi*fm*t)).*sin(2*pi*fc*t);
subplot(2,2,3)
plot(t,y3,'m');
title('Amplitude Modulation Signal')
xlabel('Time')
ylabel('Amplitude Modulation')

kf=1;
y4 = Ac*(2*pi*fc*t+kf*(Am/2*pi*fm*t)).*sin(2*pi*fc*t);
subplot(2,2,4)
plot(t,y4);
title('Frequency Modulation Signal')
xlabel('Time')
ylabel('Frequency Modulation')


