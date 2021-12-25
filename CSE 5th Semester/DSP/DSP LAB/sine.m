clc;
close all;
clear all;
A=4;
p = pi/3;
t = 0: 0.002 : 2;
y = A*sin(2*pi*t+p);
plot(t,y);