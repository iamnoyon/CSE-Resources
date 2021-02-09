#include<iostream>
using namespace std;

class calculate
{
    public:
    int length,width;


    calculate(){}

    calculate(int a, int b)
    {
        length = a;
        width = b;
    }
    void show()
    {
        cout << length << "      ";
        cout << width  << "\n";
    }
    calculate operator+(calculate op2);
    calculate operator-(calculate op1);
    calculate operator*(calculate op1);
    calculate operator=(calculate op2);
    calculate operator++();
};

calculate calculate::operator+(calculate op2)
{
    calculate temp;
    temp.length = op2.length + length;
    temp.width = op2.width + width;
    return temp;
}
calculate calculate::operator-(calculate op1)
{
    calculate temp;
     temp.length = length - op1.length;
    temp.width =  width - op1.width;
    return temp;
}
calculate calculate::operator*(calculate op1)
{
    calculate temp;
    temp.length = op1.length*length;
    temp.width = op1.width*width;
    return temp;
}
calculate calculate::operator=(calculate op2)
{
    length = op2.length;
    width = op2.width;
    return *this;
}
calculate calculate::operator++()
{
    length++;
    width++;
    return *this;
}
int main()
{
    calculate ob1(4,6),ob2(8,7);
    ob1.show();
    ob2.show();

    ob1 = ob1 + ob2;
    cout << "sum ob1: " << endl;
    ob1.show();
    ob2 = ob2 - ob1;
    cout << "subtraction " << endl;

    ob2.show();
    cout << "Multiplication: " << endl;
    ob1 = ob2*ob1;
    ob1.show();
    ++ob1;
    cout << "increamental ob1: " << endl;

    ob1.show();
    cout << "increamental ob2: " << endl;
    ++ob2;
    ob2.show();
    //ob1.show();
    return 0;
}
