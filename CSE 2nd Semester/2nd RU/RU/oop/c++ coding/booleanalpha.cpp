#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    bool b;

    b = true;
    cout << b << boolalpha << b << endl;
    cout <<"enter a boolean value: ";
    cin >> b;
    cout << "here is what you entered: " << b;
    return 0;
}
