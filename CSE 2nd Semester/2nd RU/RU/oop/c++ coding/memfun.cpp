#include<iostream>

using namespace std;

class line{
    public:
      double length;
      void setLength( double len );
      double getLength( void );
   // privet:
     // double width;

};
double line::getLength(void)
{
    return length;
}
void line::setLength( double len )
{
    length = len;
}

int main()
{
    line line;

    line.setLength(15.0);
     cout << "line of length2: " << line.getLength() <<endl;
     //line.width = 15;
    // cout << "line of width1: " << line.width <<endl;// display error because of its privet variable//
     line.length = 50;
     cout << "line of length3: " << line.length <<endl;
     return 0;
}
