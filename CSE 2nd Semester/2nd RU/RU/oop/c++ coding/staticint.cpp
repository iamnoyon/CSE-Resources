#include<iostream>

using namespace std;

static int l = 10;
void func()
{
    static int i = 6;
    i++;
    cout << "when value of i is: " << i <<"\t";
    cout << " then the value of l is: " << l <<endl;
}
int main()
{
    while(l--)
    {
        func();
    }
    return 0;
}
