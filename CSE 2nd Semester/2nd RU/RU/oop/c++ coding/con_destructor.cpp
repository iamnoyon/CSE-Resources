#include<iostream>
using namespace std;
class Line
{

     public:
     //void setlength();
     int getlength(void);
     Line( int length);//simple constructor;
     Line( const Line &obj);//copy constructor;
     ~Line();    //simple destructor;
       private:
     int *ptr;
};

Line::Line(int length)
{
    cout << "Normal constructor allocating ptr " << length <<endl;
    // allocate memory for the pointer;
    ptr = new int;
    *ptr =  length;

}
Line::Line(const Line &obj)
{
        cout << "copy constructor allocating ptr " <<endl;
    ptr = new int;
    *ptr = *obj.ptr;
}
Line::~Line(void)
{
    cout << "Freeing memory location! " <<endl;
    delete ptr;
}
int Line::getlength(void)
{
    return *ptr;
}
void display( Line obj)
{
   cout << "Length of line : " << obj.getlength() <<endl;

}
int main()
{
 Line line1(10);
 Line line2 = line1;
    // This also calls copy constructor
    display(line1);
    display(line2);
    return 0;
}
