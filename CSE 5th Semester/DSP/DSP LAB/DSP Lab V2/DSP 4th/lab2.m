%FIR low pass filter design uing rectgular,hamming and hanning window and shown
%the frequency respone
clc
clear all
close all
wc=0.5*pi;
N=100;
a=fir1(N-1,wc/pi,'low',rectwin(N));
a1=fir1(N-1,wc/pi,'low',hamming(N));
a2=fir1(N-1,wc/pi,'low',hanning(N));
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
plot(w/pi,angle(h)*180/pi,'r')
hold on 
plot(w/pi,angle(h1)*180/pi,'g')
hold on
plot(w/pi,angle(h2)*180/pi,'b')
legend('rectangular','Hamming','Hanning')