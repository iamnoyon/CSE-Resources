#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a=2.5;
    float x = 123.456F; // or double
    float y = 76.543F;
    float sum,sub;
    sum = x + y;
    sub= x-y;
    cout << "Total: " << x << " + " << y << " = " << sum << endl;
    cout << "Difference: " << x << " - " << y << " = " << sub << endl;
    cout << "value of the number after applying pow(): " << 2+pow(5.0,a) <<endl;
return 0;
}
