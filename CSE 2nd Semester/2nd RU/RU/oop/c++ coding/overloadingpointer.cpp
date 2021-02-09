#include<iostream>
using namespace std;

class X
{
    public:

    int i;
    X *operator->(){return this;}

};
int main()
{
    X ob;
    ob->i = 80;

    cout << ob.i << "   " << ob->i <<endl;
    ob->i = 50;

    cout << ob.i << "   " << ob->i;
    return 0;
}
