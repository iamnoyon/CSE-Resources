%PSD 
clc
clear all
close all
fs=500;
L=500;
t=0:1/fs:1;
y=5*cos(2*pi*50*t);
h=hamming(L);
plot(t,y)
figure
psd(y,L,fs,h);
figure
pwelch(y,h,50,L,fs)
