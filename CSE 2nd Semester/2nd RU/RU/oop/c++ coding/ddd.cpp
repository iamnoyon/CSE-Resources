#include <iostream>
using namespace std;
main()
{
int a = 5;
int b = 20;
int c;
if ( a && b )
{
cout << "Line 1 - Condition is true"<< endl ;
}
if ( a || b )
{
cout << "Line 2 - Condition is true"<< endl ;
}
/* Let's change the values of a and b */
a = 0;
b = 10;
if ( a && b )
{
cout << "Line 3 - Condition is true"<< "\n";
}
else
{
    cout << "Line 4 - condition is true" << "\n";
}
if(!(a&&b))
{
    cout << "Line 5 - condition is true" << "\n";
}
return 0;
}
