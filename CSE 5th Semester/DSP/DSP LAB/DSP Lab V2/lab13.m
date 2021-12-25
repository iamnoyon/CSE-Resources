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
w=zeros(L+1,1);
for n=1:L+1
w(n)=0.54-0.46*cos((2*pi*(n-1)/(L-1)));  % Hamming window
end
w1=zeros(L+1,1);
for n=1:L+1
w1(n)=0.5*(1-cos((2*pi*(n-1)/(L-1)))); %Hanning window
end
figure
plot(w)
hold on
plot(w1,'r')
legend('hamming','hanning')
y=frame.*w;
y1=frame.*w1;
figure
plot(y)                                                                                                                                                                                                                           
hold on
plot(y1,'r')
legend('hamming','hanning')
