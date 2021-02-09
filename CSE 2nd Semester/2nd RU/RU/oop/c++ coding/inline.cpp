#include<iostream>
using namespace std;

inline int maximum( int x,int y)
{
    return (x>y)? x:y;
}
int main()
{
    cout << "maximum of that function is : " << maximum(40,50) <<endl;
    cout << "maximum of that function is : " << maximum(40,-50) <<endl;
    cout << "maximum of that function is : " << maximum(0,50) <<endl;
    return 0;
}
