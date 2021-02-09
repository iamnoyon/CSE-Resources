#include<iostream>
using namespace std;
template <class X>void swap(int &a, int &b)
{
    X temp;
    temp = a;
    a=b;
    b=temp;
}
int main()
{
    int i=50,j=8;
    double x=4.50,y=7.856;
    char a = 'B', b = 'A';
    cout << "original i & j: " << i << "   " << j <<endl;
    cout << "original x & y: " << x << "   " << y <<endl;
    cout << "original a & b: " << a << "   " << b <<endl;
    swap(i,j);
    swap(x,y);
    swap(a,b);
    cout << i << "  " << j << "\n";
    cout << x << "  " << y << "\n";
    cout << a << "  " << b << "\n";
    return 0;
}
