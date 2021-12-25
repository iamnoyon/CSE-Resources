#include <iostream>
#include<graphics.h>
using namespace std;


void lineares (int xa, int ya , int xb, int yb,int c)
{

int dx = abs ( xa - xb) , dy = abs(ya - yb);
int p = 2 * dy - dx ;

int twoDy = (2 * dy), twoDyDx = 2 *(dy - dx);
int x , y, xEnd;
//' Determine which point to use a sstart, which as end * /
if (xa > xb ) {
                 x = xb;
               y = yb;
                  xEnd = xa;
             }
      else {
           x = xa;
           y = ya;
             xEnd = xb;
      }

putpixel (x, y,c);

   while (x < xEnd)
   {
           x++;
       if (p < 0)
          p+= twoDy;
     else {
          y++;
           p += twoDyDx;
        }
putpixel ( x , y,c);
}
}
int main()
{
// Graphics draiver
    int i,gd=DETECT,gm;
    int p1x,p1y,p2x,p2y,cl;

//input the two end point

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
   // setcolor(RED);
     
lineares (p1x,p1y,p2x,p2y,cl);
    cout << "Hello world!" << endl;
    cin>>i;
    return 0;
}
