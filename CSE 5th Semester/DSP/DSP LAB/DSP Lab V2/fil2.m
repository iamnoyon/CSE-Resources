clc
clear all
y1=imread('cameraman.tif');
%y1=imresize(A,[5 5])
[m n]=size(y1);
y2=zeros(m+2,n+2);
for x=1:m
    for y=1:n;
        y2(x+1,y+1)=y1(x,y);
    end
end
[r c]=size(y2);
y3=zeros(m,n)
for i=2:r-1;
    for j=2:c-1
        window=zeros(9,1);
        ind=1;
        for x=1:3
            for y=1:3
                window(ind)=y2(i+x-2,j+y-2);
                ind=ind+1;
            end
        end
        med=sort(window);
        y3(i-1,j-1)=med(5);
    end
end
y3=uint8(y3);
subplot(2,1,1)
imshow(y1);
subplot(2,1,2)
imshow(y3);