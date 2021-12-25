clc;
clear all;
close all;

b=input('Enter the numerator coefficient:');
a=input('Enter the denominator coefficients:');
[h,w] = freqz(b,a);
subplot(2,1,1);
plot(w/pi,abs(h));
grid;
xlabel('Normalized Frequency');
ylabel('Magnitude in DB');
title('Magnitude Response');
subplot(2,1,2);
plot(w/pi,angle(h));
grid;
xlabel('Normalized Frequency');
ylabel('Phase in Radians');
title('Phase Response');