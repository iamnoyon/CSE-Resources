%band pass filter design using kaiser window 
clc
clear all
close all
wc=[0.25*pi,0.75*pi];
N=25;
a=fir1(N-1,wc/pi,kaiser(N,0.5));
a1=fir1(N-1,wc/pi,kaiser(N,3.5));
a2=fir1(N-1,wc/pi,kaiser(N,12.5));
w=0:0.01:pi;
h=freqz(a,1,w);
h1=freqz(a1,1,w);
h2=freqz(a2,1,w);
plot(w/pi,abs(h),'r')
hold on
plot(w/pi,abs(h1),'g')
hold on
plot(w/pi,abs(h2),'b')
legend('0.5','3.5','12.5')
figure
plot(w/pi,angle(h),'r')
hold on 
plot(w/pi,angle(h1),'g')
hold on
plot(w/pi,angle(h2),'b')
legend('0.5','3.5','12.5')