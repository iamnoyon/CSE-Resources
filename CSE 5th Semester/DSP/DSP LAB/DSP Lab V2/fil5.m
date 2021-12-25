%Average or mean filter using 5*5 filter
clc
clear all
y1=imread('cameraman.tif');
[m n]=size(y1);
w1=ones(5,5);
%y2=padarray(y1,[2 2]);
y2=zeros(m+4,n+4);
for x=1:m
    for y=1:n
        y2(x+2,y+2)=y1(x,y);
    end
end
[r c]=size(y2);
y3=zeros(m,n);
for i=3:r-2
    for j=3:c-2
        sum=0;
        for x=1:5
            for y=1:5
                sum=sum+(y2(i+x-3,j+y-3)*w1(x,y))/25;
            end
        end
        y3(i-2,j-2)=sum;
    end
end
y3=uint8(y3);
subplot(2,1,1)
imshow(y1);
title('Original image');
subplot(2,1,2)
imshow(y3);
title('After Average filter');