clc;
clear all;
close all;
kf=20;
Am=1;
fm=2;
beta=(kf*Am)/fm;
t=0:0.001:1;
%t=linspace(0,1,500);
mt=Am*cos(2*pi*fm*t);
Ac=1;
fc=20;
ct=Ac*cos(2*pi*fc*t);

sfm=Ac*cos(2*pi*fc*t+beta*(sin(2*pi*fm*t)));

figure(1);
subplot(3,1,1);
plot(t,mt);
title('message Signal');
xlabel('time...');
ylabel('amplitude...');

subplot(3,1,2);
plot(t,ct);
title('Carrier Signal')
xlabel('time...');
ylabel('amplitude...');

subplot(3,1,3);
plot(t,sfm);
title('Frequency Modulated Signal');
xlabel('time...');
ylabel('amplitude...');