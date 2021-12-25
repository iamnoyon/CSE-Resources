#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#define PI 2*acos(0.0)

void RectAngle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x4,y4);
   line(x1,y1,x4,y4);
}

void Rotate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    int a1,b1,a2,b2,a3,b3,a4,b4,p,q;
    float Angle;
    printf("Enter the angle for rotation : ");
    scanf("%f",&Angle);
    printf("Now enter the pivot point : ");
    scanf("%d%d",&p,&q);

    Angle=-(Angle*PI)/180;
    a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
    b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
    a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
    b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
    a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
    b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
    a4=p+(x4-p)*cos(Angle)-(y4-q)*sin(Angle);
    b4=q+(x4-p)*sin(Angle)+(y4-q)*cos(Angle);
    RectAngle(a1,b1,a2,b2,a3,b3,a4,b4);
}

int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    initgraph(&gd,&gm,"../bgi");
    printf("Enter the 1st point of the Rectangle : ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the 2nd point of the Rectangle : ");
    scanf("%d%d",&x2,&y2);
    printf("Enter the 3rd point of the Rectangle : ");
    scanf("%d%d",&x3,&y3);
    printf("Enter the 4th point of the Rectangle : ");
    scanf("%d%d",&x4,&y4);
    RectAngle(x1,y1,x2,y2,x3,y3,x4,y4);
    setcolor(6);
    Rotate(x1,y1,x2,y2,x3,y3,x4,y4);
    setcolor(5);
    getch();
    closegraph();
    return 0;
}

