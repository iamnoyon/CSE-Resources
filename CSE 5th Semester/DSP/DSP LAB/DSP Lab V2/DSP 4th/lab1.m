%frequency response of a system
clc
clear all
close all
b=[1];
a=[1,-0.8];
w=0:0.01:2*pi;
freqz(a,b,w);


