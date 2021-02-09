#include<iostream>
using namespace std;

class Line
{
    int length;
    public:
    void setlength( int len );
    int getlength( void );
    Line();
    ~Line();
};
Line::Line(void)
{
    cout << "program is being created" <<endl;
}
Line::~Line(void)
{
    cout << "program is being deleted " <<endl;
}
void Line::setlength( int len )
{
    length = len;
}
int Line::getlength(void)
{
    return length;
}
int main()
{
    Line line;
    line.setlength(15);

    cout << "value of length is = " << line.getlength() <<endl;
return 0;
}
