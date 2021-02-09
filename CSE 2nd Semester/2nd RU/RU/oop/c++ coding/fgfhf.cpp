#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios::dec, ios::basefield);
    //cout.setf(ios::uppercase | ios::scientific);
    //cout.setf(ios::showpoint);
    //cout.setf(ios::showpos);
    int n;
    cin >> n;

    cout << n;

    /*cout.unsetf(ios::uppercase);
    cout << "\n "<<100.12;*/
    return 0;
}
