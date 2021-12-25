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
y=fft(frame);
figure
stem(2*abs(y)/L)
title('DFT of this frame signal');
y2=ifft(y);
figure
plot(L1:L2,y2)
title('IDFT of the DFT signal');