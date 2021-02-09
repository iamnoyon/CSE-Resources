#include<iostream>
using namespace std;

class calculate
{
    public:
    int longth, width;
    //public:
      calculate(){}
      calculate(int a,int b)
      {
          longth = a;
          width = b;

      }
      void show()
      {
          cout << longth <<"   ";
          cout << width <<"\n";

      }
      calculate operator+(calculate op2);
      //calculate operator++();
      friend calculate operator++(calculate &op);
      friend calculate operator--(calculate &op);

};
calculate calculate::operator+(calculate op2)
{
    calculate t;
    t.longth = op2.longth+longth;
    t.width = op2.width+width;
    return t;
}
calculate operator++(calculate &op)
{
    op.longth++;
    op.width++;
    return op;
}
calculate operator--(calculate &op)
{
    op.longth--;
    op.width--;
    return op;
}
int main()
{
    calculate obj1(10,20);

    obj1.show();
   // obj2.show();

    ++obj1;
    cout << "inceament ob1: ";
    obj1.show();

    --obj1;
    cout << "decreament ob1: ";
    obj1.show();
   obj1 = obj1 + obj1;
    obj1.show();

    return 0;
}
