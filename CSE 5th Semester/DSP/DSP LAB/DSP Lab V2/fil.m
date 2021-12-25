%Average filter using 3*3 filter
clc
clear all
y1=imread('cameraman.tif');
[m n]=size(y1);
y2=zeros(m+2,n+2);
for x=1:m
    for y=1:n;
        y2(x+1,y+1)=y1(x,y);
    end
end
[r c]=size(y2);
y3=zeros(m,n);
for i=2:r-1;
    for j=2:c-1
        y3(i-1,j-1)=y2(i-1,j-1)/9+y2(i-1,j)/9+y2(i-1,j+1)/9+y2(i,j-1)/9+y2(i,j)/9+y2(i,j+1)/9+y2(i+1,j-1)/9+y2(i+1,j)/9+y2(i+1,j+1)/9;
    end
end
y3=uint8(y3);
subplot(2,1,1)
imshow(y1);
subplot(2,1,2)
imshow(y3);