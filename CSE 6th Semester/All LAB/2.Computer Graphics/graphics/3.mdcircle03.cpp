#include <iostream>
#include<graphics.h>
using namespace std;

void circlePlotPoints (int, int, int, int,int);


void circleMidpoint (int xCenter, int yCenter, int radius,int c)
{

int x = 0;
int y = radius;
int p = 1 - radius;//' Plot first set of points '/
circlePlotPoints (xCenter,yCenter,x,y,c);
while (x < y){
x++ ;
if (p <0)
p +=2*x + 1;
else {
y--;

p += 2 * (x - y) + 1;
}
circlePlotPoints (xCenter,yCenter,x,y,c);
}
}
void circlePlotPoints (int xCenter, int yCenter, int x, int y,int c)
{

putpixel (xCenter + x, yCenter + y , c) ;
putpixel (xCenter - x, yCenter + y,c);
putpixel (xCenter + x, yCenter- y,c);
putpixel (xCenter - x, yCenter- y ,c) ;
putpixel (xCenter + y, yCenter+ x,c);
putpixel (xCenter - y , yCenter+ x,c);
putpixel (xCenter + y , yCenter - x,c);
putpixel (xCenter - y , yCenter - x,c);
}

int main()
{
    int i,gd=DETECT,gm;
    int c1x,c1y,r,cl;

cout<<"\ninsert center(x) =";
cin>>c1x;
cout<<"\ninsert center(y) = ";
cin>>c1y;
cout<<"\ninsert redious r =";
cin>>r;
cout<<"\ninsert color code any of (1 to 9) = ";
cin>>cl;

    initgraph(&gd,&gm,"");

     circleMidpoint (c1x,c1y,r,cl);
    cout << "Hello world!" << endl;
    cin>>i;
    return 0;
}
