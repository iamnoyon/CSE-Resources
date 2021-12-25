clc
clear all
close all
fs=1000;
t=0:1/fs:1;
L=100;
x=5*cos(2*pi*100*t)+randn(size(t));
q=hamming(L);
q1=hanning(L);
q2=kaiser(L,12.5);
q3=rectwin(L);
psd(x,L,fs,q);
hold on
psd(x,L,fs,q1);
hold on
psd(x,L,fs,q2);
hold on
psd(x,L,fs,q3);
legend('Hamming','hanning','kaiser','rectgular')