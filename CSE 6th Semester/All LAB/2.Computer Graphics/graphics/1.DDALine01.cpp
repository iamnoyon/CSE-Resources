#include <iostream>
#include<graphics.h>

using namespace std;

#define ROUND(a) ((int)(a+0.5))

void lineDDA (int xa, int ya, int xb, int yb,int c)
{

int dx = (xb - xa);
int dy = (yb - ya);
 int steps, k;
float xIncrement, yIncrement, x = xa, y = ya;
if (abs(dx) > abs(dy) )steps = abs (dx) ;
else steps = abs (dy);
xIncrement = dx / (float) steps;
yIncrement = dy / (float) steps;
putpixel (ROUND(x), ROUND(y) ,c) ;
for (k=0; k<steps; k++) {
x += xIncrement;
y += yIncrement;
putpixel (ROUND(x), ROUND(y),c);
}

}
int main()
{
    int i,gd=DETECT,gm;
int p1x,p1y,p2x,p2y,cl;
cout<<"\ninsert p1(x) =";
cin>>p1x;
cout<<"\ninsert p1(y) = ";
cin>>p1y;
cout<<"\ninsert p2(x) =";
cin>>p2x;
cout<<"\ninsert p2(y) = ";
cin>>p2y;

cout<<"\ninsert color code any of (1 to 9) = ";
cin>>cl;




    initgraph(&gd,&gm,"");

    lineDDA(p1x,p1y,p2x,p2y,cl);


    cin>>i;
    return 0;










}

