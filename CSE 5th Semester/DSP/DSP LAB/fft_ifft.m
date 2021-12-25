clc;
clear all;
close all;
x = input('Enter Sequence:');
ln = length(x);
xk = fft(x,ln);
xn = ifft(xk);
t = 0:ln-1;

subplot(2,2,1);
stem(t,x);
title('Input Sequence');
xlabel('T');
ylabel('Amplitude');

m = abs(xk);
subplot(2,2,2);
stem(t,m);
title('Magnitude Response');
xlabel('T');
ylabel('Magnitude');

p = angle(xk);
subplot(2,2,3);
stem(t,p);
title('Phase Sequence');
xlabel('T');
ylabel('Phase');

subplot(2,2,4);
stem(t,xn);
title('IFFT');
xlabel('T');
ylabel('Amplitude');