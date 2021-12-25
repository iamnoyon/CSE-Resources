#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// function to translate rectangle
void translateRectangle ( int P[][2], int T[])
{
	/* init graph and rectangle() are used for
	representing rectangle through graphical functions */
	int gd = DETECT, gm, errorcode;
	initgraph (&gd, &gm, "c:\\tc\\bgi");
	setcolor (7);
	// rectangle (Xmin, Ymin, Xmax, Ymax)
	// original rectangle
	rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
	delay(5000);

	// calculating translated coordinates
	P[0][0] = P[0][0] + T[0];
	P[0][1] = P[0][1] + T[1];
	P[1][0] = P[1][0] + T[0];
	P[1][1] = P[1][1] + T[1];

	// translated rectangle (Xmin, Ymin, Xmax, Ymax)
	setcolor(3);
	rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
	delay(5000);
	// closegraph();
}

// driver program
int main()
{
	// Xmin, Ymin, Xmax, Ymax as rectangle
	// coordinates of top left and bottom right points
	int P[2][2] = {50, 80, 120, 180};
	int T[] = {20, 10}; // translation factor
	translateRectangle (P, T);
	return 0;
}
