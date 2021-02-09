#include<iostream>
using namespace std;

double mod1(double );

int main()
{
    double x,n;
    cout<<"Enter first number : ";
    cin >> x;

    n = mod1(x);

    cout << "the result of the mod operation is :: " << n;
    return 0;
}

double mod1(double a)
{
    if(a<0)a *= -1;

    return a;
}

