%-45 degree line detection
clc
clear all
close all
y5=imread('circuit.tif');
y1=imrotate(y5,-45);
[m n]=size(y1);
y2=zeros(m+2,n+2);
w=[2 -1 -1;-1 2 -1;-1 -1 2];
for x=1:m
    for y=1:n;
        y2(x+1,y+1)=y1(x,y);
    end
end
[r c]=size(y2);
y3=zeros(m,n);
for i=2:r-1;
    for j=2:c-1
        sum=0;
        for x=1:3
            for y=1:3
                sum=sum+(y2(i+x-2,j+y-2)*w(x,y));
            end
        end
        y3(i-1,j-1)=sum;
    end
end
y3=uint8(y3);
subplot(2,1,1)
imshow(y1);
subplot(2,1,2)
imshow(y3);