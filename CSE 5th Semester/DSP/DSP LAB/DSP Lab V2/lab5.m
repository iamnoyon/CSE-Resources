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
%plot(audio)
title('Original voice signal');
frame=zeros(L+1,1);
 frame=audio(L1+1:L2+1);
%figure
plot(L1:L2,frame)
title('Frame signal');
w=ones(L+1,1);
figure
size(frame)
size(w)
plot(w)
y=frame.*w;
figure
plot(y)