#include<iostream>
using namespace std;

int main()
{
    int a,b,result;
    cout << "Enter the num1: \n";
    cin >> a;
     cout << "Enter the num2: \n";
     cin >> b;
     result = a/b;
     if(b!=0)
     cout <<" b is not equal to 0 and the operation is =" << a << "/" << b << " is the result which is " << result;
     else
     cout << " division not possible ";
     return 0;

}
