clc;
clear all;
close all;
xn = input('Enter the sequence:');
ln = length(xn);
xk = zeros(1,ln);
ixk = zeros(1,ln);

for k=0: ln-1
    for n=0:ln-1
        xk(k+1) = xk(k+1) + (xn(n+1)*exp((-i)*2*pi*k*n/ln));
    end
end

t=0:ln-1;
subplot(221);
stem(t,xn);
ylabel('Amplitude');
xlabel('Time Index');
title('Input Sequence');

magnitude = abs(xk);
t=0:ln-1;
subplot(222);
stem(t,magnitude);
ylabel('Amplitude');
xlabel('K');
title('Magnitude Response');

phase = angle(xk);
t=0:ln-1;
subplot(223);
stem(t,phase);
ylabel('Phase');
xlabel('K');
title('Phase Response');


for n=0:ln-1
    for k=0:ln-1
        ixk(n+1) = ixk(n+1)+(xk(k+1)*exp(i*2*pi*k*n/ln));
    end
end
ixk = ixk./ln;

t=0:ln-1;
subplot(224);
stem(t,ixk);
ylabel('Amplitude');
xlabel('Time Index');
title('IDFT Sequence');



