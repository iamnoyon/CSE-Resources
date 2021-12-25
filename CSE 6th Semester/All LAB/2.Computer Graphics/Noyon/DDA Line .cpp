// C program for DDA line generation
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT, gm, steps;
	initgraph (&gd, &gm, "");
	int x0 = 100, y0 = 100, x1 = 150, y1 = 200;

	int dx = x1 - x0;
	int dy = y1 - y0;

	if(abs(dx)>abs(dy)){
        steps = abs(dx);
    }
    else{
        steps = abs(dy);
    }
	float xin = dx / (float) steps;
	float yin = dy / (float) steps;
	float x = x0;
	float y = y0;
	for (int i = 0; i <= steps; i++)
	{
		putpixel (x,y,3);
		x  = x + xin;
		y  = y + yin;
		delay(100);
	}
	getch();
	closegraph();
	return 0;
}
