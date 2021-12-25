clc
clear all
close all
fs=500;
t=0:1/fs:1;
L=500;
y=5*cos(2*pi*100*t);
h=rectwin(L);
plot(t,y)
a=psd(y,L,fs,h);
f=0:L/2;
figure
plot(f,a)