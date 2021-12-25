clc
clear all
close all
x=[1 2 3 4 5 6];
fs=100;
L=20;
h=hamming(L);
[a,f]=psd(x,L,fs,h);
plot(f,a)