clc;
close all;
clear all;
a = input('Give Input:');
b = [4 3 2];
c = conv(a,b)
h = length(a)
stem(c)