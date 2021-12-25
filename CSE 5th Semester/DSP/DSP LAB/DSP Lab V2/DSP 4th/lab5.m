%High pass filter design using tectgular,hamming and hanning window 
clc
clear all
close all
wc=0.5*pi;
N=25;
a=fir1(N-1,wc/pi,'high',rectwin(N));
a1=fir1(N-1,wc/pi,'high',hamming(N));
a2=fir1(N-1,wc/pi,'high',hanning(N));
w=0:0.001:pi;
h=freqz(a,1,w);
h1=freqz(a1,1,w);
h2=freqz(a2,1,w);
plot(w/pi,abs(h),'r')
hold on
plot(w/pi,abs(h1),'g')
hold on
plot(w/pi,abs(h2),'b')
legend('rectangular','Hamming','Hanning')
figure
plot(w/pi,angle(h),'r')
hold on 
plot(w/pi,angle(h1),'g')
hold on
plot(w/pi,angle(h2),'b')
legend('rectangular','Hamming','Hanning')