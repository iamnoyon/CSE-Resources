#include <iostream>
using namespace std;
main()
{
unsigned int a; // 60 = 0011 1100
unsigned int b; // 13 = 0000 1101
int c;
cin >> a >>  b;
c = a & b; // 12 = 0000 1100
cout << "value is: " << c << "\n";
return 0;
}
