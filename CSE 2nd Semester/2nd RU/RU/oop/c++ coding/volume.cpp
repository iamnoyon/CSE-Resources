#include<iostream>

using namespace std;
class box{
  public:
  double H,L,W;

};
int main()
{
    box b1;
    box b2;
    double volume = 0;
    cout << "Enter three number of object1 " <<endl;
    cin >> b1.H  >> b1.L  >> b1.W;
    cout << "Enter three number of object1 " <<endl;
     cin >> b2.H  >> b2.L  >> b2.W;
   /* b1.H=4.0;
    b1.L=5.0;
    b1.W=6.0;*/
    volume = b1.H*b1.L*b1.W;
    cout << "Volume1: " << volume <<endl;
   /* b2.H=7.0;
    b2.L=8.0;
    b2.W=10.0;*/
    volume = b2.H*b2.L*b2.W;
     cout << "Volume2: " << volume <<endl;
    return 0;
}

