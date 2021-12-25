clc;
clear all;
close all;
x = input('Enter Input Sequence: ');
ln = length(x);
xk = fft(x,ln);
xn = ifft(xk);
t = 0:ln-1;

subplot(221);
stem(t,x);
title('Input Sequence');
xlabel('Time');
ylabel('Amplitude');

m = abs(xk);
subplot(222);
stem(t,m);
title('Magnitude Response');
xlabel('Time');
ylabel('Magnitude');

p = angle(xk);
subplot(223);
stem(t,p);
title('Phase Response');
xlabel('Time');
ylabel('Phase');

subplot(224);
stem(t,xn);
title('IFFT');
xlabel('Time');
ylabel('Amplitude');