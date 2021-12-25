clc
clear all
y=load('plain');
L=512;
len=length(y)
frame_no=floor(len/L)
k=input('Enter the frame no.=');
L1=(k-1)*L;
L2=k*L;
frame=y(L1+1:L2+1);
plot(y);
figure
plot(L1:L2,frame)
y1=fft(frame);
figure
stem(0:L,2*abs(y1)/L)
y2=ifft(y1);
figure
plot(L1:L2,y2)
