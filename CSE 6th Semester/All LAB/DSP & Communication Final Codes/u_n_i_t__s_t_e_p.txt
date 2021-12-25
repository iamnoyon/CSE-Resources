clc;
close all;
clear all;
t = 0: 0.2:4;
unitstep = t>=0;
stem(t,unitstep);