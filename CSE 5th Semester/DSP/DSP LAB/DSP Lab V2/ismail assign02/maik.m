function [] = maik( A,f0 )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

%A=5;
%f0=3;
clc
T=1;
phi=pi/2;
t=0:0.001:T;
xt=A*cos(2*pi*f0*t+phi);
fs=10*f0;
Ts=1/fs;
N=T*fs;n=0:N-1;
xn=A*cos(2*pi*f0*Ts*n+phi);
subplot(2,1,1)
stem(t,xt)
subplot(2,1,2)
stem(n,xn)



