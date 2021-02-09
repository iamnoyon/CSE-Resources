#include<iostream>
using namespace std;

int main()
{
    double f;
    double m;
    int counter;

    counter = 0;
    for(m=1.0; m<=100.0; m++)
    {
        f=m*3.28;
        cout << m << " metre is equal to " << f << " feet" << "\n";
        counter++;
        if(counter==10)
        {
        cout << "\n\n";
        counter=0;
        }
    }
    return 0;
}
