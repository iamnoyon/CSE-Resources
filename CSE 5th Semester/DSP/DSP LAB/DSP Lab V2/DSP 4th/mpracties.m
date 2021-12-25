clc
clear all
close all
fs=1000;
t=0:1/fs:1;
L=500;
x=5*cos(2*pi*100*t)+randn(size(t));
h=hamming(L)
h1=hanning(L)
h2=kaiser(L,12.5);
h3=rectwin(L);

[a,f]=psd(x,L,fs,h);
[a1,f]=psd(x,L,fs,h1);
[a2,f]=psd(x,L,fs,h2);
[a3,f]=psd(x,L,fs,h3);

plot(t,x)
figure,plot(f,10*log10(a))
hold on
plot(f,10*log10(a1),'r')
hold on
plot(f,10*log10(a2),'g')
hold on
plot(f,10*log10(a3),'black')
legend('hamming','hanning','kaiser','rectengular')