clc
clear all
close all
fs=1000;
L=1000;
t=0:1/fs:1;
y=10*sin(2*pi*250*t)+2*sin(2*pi*100*t)+randn(size(t));
h=hamming(L);
f=0:L/2;
%pwelch(y,h,75,L,fs);
%figure
plot(t,y)
figure
psd(y,L,fs,h);