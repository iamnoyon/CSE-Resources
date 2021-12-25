#include <graphics.h>


int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	circle(100, 200, 70);
    getch();
	closegraph();
	return 0;
}
