function [] = main(A,fo)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
clc
T=1;
phi=pi/2;
t=0:0.001:T;
xt=A*cos(2*pi*fo*t+phi);
fs=10*fo;
Ts=1/fs;
N=T*fs;n=0:N-1;
xn=A*cos(2*pi*fo*Ts*n+phi);
tic;
y=fft(xn);
subplot(4,1,1)
stem(n,2*abs(y)/N)
xlabel('frequency');
ylabel('Amplitude');
title('DFT using building function fft');
disp('Time taken by fft')
toc;
Xk=my_dft(xn,N);
tic;
y1=ifft(Xk);
subplot(4,1,3)
stem(n,y1)
xlabel('time');
ylabel('Amplitude');
title('IDFT using building function ifft');
disp('Time taken by ifft')
toc;
my_idft(Xk,N);
end
function[Xk]=my_dft(xn,N)
tic;
k=0:N-1;
for n=0:N-1
    Xk(n+1)=sum(xn.*exp(-(j*2*pi*k*n/N)));
end
n=0:N-1;
subplot(4,1,2)
stem(n,2*abs(Xk)/N)
xlabel('Frequency');
ylabel('Amplitude');
title('DFT using user defined function my_dft');
disp('Time taken by my_dft')
toc;
end
function[]=my_idft(Xk,N)
tic;
n=0:N-1;
for k=0:N-1
    xn(1,k+1)=(1/N)*sum(Xk.*exp(j*2*pi*k*n/N));
end
n=0:N-1;
subplot(4,1,4)
stem(n,xn)
xlabel('Time');
ylabel('Amplitude');
title('IDFT using user defined function my_idft');
disp('Time taken by my_idft')
toc;
end
