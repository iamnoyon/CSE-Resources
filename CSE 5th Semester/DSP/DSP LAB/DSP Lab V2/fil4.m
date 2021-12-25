%Average filter using 7*7 filter
clc
clear all
y1=imread('cameraman.tif');
[m n]=size(y1);
w1=ones(7,7);
y2=padarray(y1,[3 3]);
[r c]=size(y2);
y3=zeros(m,n);
for i=4:r-3
    for j=4:c-3
        sum=0;
        for x=1:7
            for y=1:7
                sum=sum+(y2(i+x-4,j+y-4)*w1(x,y))/49;
            end
        end
        y3(i-3,j-3)=sum;
    end
end
y3=uint8(y3);
subplot(2,1,1)
imshow(y1);
subplot(2,1,2)
imshow(y3);