#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int x1,x2,x3,y1,y2,y3,tx,ty;
	int x,y,dx,dy;
	int cx=320,cy=240;

	printf("X1: ");
	scanf("%d",&x1);
	printf("y1: ");
	scanf("%d",&y1);
	printf("x2: ");
	scanf("%d",&x2);
	printf("y2: ");
	scanf("%d",&y2);
	printf("x3: ");
	scanf("%d",&x3);
	printf("y3: ");
	scanf("%d",&y3);

	int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
	line(0,240,640,240);
	line(320,0,320,480);

	setcolor(10);
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x3,y3,x2,y2);

	if((y1<y2)&&(y1<y3))
	 y=y1;
	else if(y2<y3)
	y=y2;
	else y=y3;

	if(y==y1)
	{dx=x1-cx;
	dy=y1-cy;}
	else if (y==y2)
	{dx=x2-cx;
	dy=y2-cy;}
	else if (y==y3)
	{dx=x3-cx;
	dy=y3-cy;}

	setcolor(RED);
	line(x1-dx,y1-dy,x2-dx,y2-dy);
	line(x1-dx,y1-dy,x3-dx,y3-dy);
	line(x3-dx,y3-dy,x2-dx,y2-dy);

   getch();

}
