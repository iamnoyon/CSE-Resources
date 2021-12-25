clc
clear all
close all
audio=load('plain');
L=512;
len=length(audio)
frame_count=floor(len/L)
k=input('Enter the frame no.=')
L1=(k-1)*L;
L2=k*L;
plot(audio)
title('Original voice signal');
frame=audio(L1+1:L2+1);
figure
plot(L1:L2,frame)
title('Frame signal');
w=hamming(513);
figure
plot(w)
y1=frame.*w;
figure
plot(y1)
w1=bartlett(513);
figure
plot(w1)
y2=frame.*w1;
figure
plot(y2)
y3=xcorr(frame,y2);
figure
plot(y3)