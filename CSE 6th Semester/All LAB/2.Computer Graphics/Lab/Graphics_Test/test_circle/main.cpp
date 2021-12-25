#include <iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(RED);
    circle(100,100,100);
    cout << "Hello world!" << endl;
    cin>>i;
    return 0;
}
