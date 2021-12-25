%probleb -03
function[]= my_dft1(A,fo)
%UNTITLED7 Summary of this function goes here
%   Detailed explanation goes here
clc
T=1;
phi=pi/2;
t=0:0.001:T;
xt=A*cos(2*pi*fo*t+phi);
fs=100;
Ts=1/fs;
N=T*fs;n=0:N-1;
xn=A*cos(2*pi*fo*Ts*n+phi);
subplot(3,1,1)
stem(n,xn)
xlabel('time');
ylabel('Amplitude');
title('Sampled signal');
Xk=my_dft(xn,N);
my_idft(Xk,N);
end
function[Xk]=my_dft(xn,N)
k=0:N-1;
for n=0:N-1
    Xk(1,n+1)=sum(xn.*exp(-(j*2*pi*k*n/N)));
end
n=0:N-1;
subplot(3,1,2)
stem(n,2*abs(Xk)/N)
xlabel('Frequency');
ylabel('Amplitude');
title('DFT computation of sampled signal');
end
function[]=my_idft(Xk,N)
n=0:N-1;
for k=0:N-1
    xn(1,k+1)=(1/N)*sum(Xk.*exp(j*2*pi*k*n/N));
end
n=0:N-1;
subplot(3,1,3)
stem(n,xn)
xlabel('Time');
ylabel('Amplitude');
title('IDFT from DFT');
end
