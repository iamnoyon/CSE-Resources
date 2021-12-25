clc;
close all;
clear all;
subplot(2,2,1)
a=[1 2 3];
stem (a)
subplot(2,2,2)
b = [5 6 7];
stem(b)
subplot(2,2,3)
c=conv(a,b)
stem(c)