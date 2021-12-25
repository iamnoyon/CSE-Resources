#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define Round(a) (int) (a+0.5)
using namespace std;

int main()
{
int x1,y1,x2,y2;
float s;
printf("x1: ");
	scanf("%d",&x1);
	printf("y1: ");
	scanf("%d",&y1);
	printf("x2: ");
	scanf("%d",&x2);
	printf("y2: ");
	scanf("%d",&y2);

	printf("Scalling factor: ");
	scanf("%f",&s);

   int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(0,240,640,240);
	line(320,0,320,480);

	setcolor(10);
	rectangle(x1,y1,x2,y2);

	x2=x1+(x2-x1)*s;
	y2=y1+(y2-y1)*s;

	setcolor(9);
	rectangle(x1,y1,Round(x2),Round(y2));

	getch();
}




