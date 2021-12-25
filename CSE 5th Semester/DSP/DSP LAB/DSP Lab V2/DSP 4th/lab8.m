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
[a,f]=psd(x,L,fs,q);
[a1,f]=psd(x,L,fs,q1);
[a2,f]=psd(x,L,fs,q2);
[a3,f]=psd(x,L,fs,q3);
%b=pwelch(x,q,L-1,fs);
%f=0:L/2;
plot(t,x)
figure
plot(f,10*log10(a))
hold on
plot(f,10*log10(a1),'r')
hold on
plot(f,10*log10(a2),'black')
hold on
plot(f,10*log10(a3),'g')
legend('Hamming','hanning','kaiser','rectgular')