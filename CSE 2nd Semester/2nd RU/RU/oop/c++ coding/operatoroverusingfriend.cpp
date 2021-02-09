#include<iostream>
using namespace std;

class calculate
{
    int length,width;
    public:
    calculate(){}
    calculate(int a, int b)
    {
        length = a;
        width = b;
    }
    void show()
    {
        cout << length << "  ";
        cout << width <<endl;
    }
    friend calculate operator-(calculate op1,calculate op2);
};
calculate operator-(calculate op1,calculate op2)
{
    calculate dev;
    dev.length = op1.length - op2.length;
    dev.width = op1.width - op2.width;
    return dev;
}
int main()
{
    calculate ob1(10,15),ob2(20,25);
    cout << "ob1: ";
    ob1.show();
    cout << "ob2: ";
    ob2.show();
    ob1 = ob2-ob1;
    cout << "resultant ob1: ";
    ob1.show();
    return 0;
}

