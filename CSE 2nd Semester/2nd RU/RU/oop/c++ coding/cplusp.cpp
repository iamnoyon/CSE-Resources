#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("TEST4.txt");
    if(!out)
    cout << "can not open file" << endl;
    else
    {
        out << "HIMALOY_ROY";
        out.close();
    }
    ifstream in("TEST4.txt");
    if(!in)
    cout << "can not open file" << endl;
    else
    {
        char str[100];

        in>>str;
        cout << str;
        in.close();
    }
    return 0;
}
