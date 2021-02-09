#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //cout.setf(ios::oct, ios::basefield);
    int n;
    cin >> n;
    cout << oct << n <<"\n";
    cout << setfill('D') <<setw(10) << n << "\n";

    cout.setf(ios::left);
     cout.fill('*');
     cout.width(10);
    cout << n;
    return 0;
}
