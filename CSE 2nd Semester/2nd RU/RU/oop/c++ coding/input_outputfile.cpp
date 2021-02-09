#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("INVNTRY");
    if(!out)
    {
        cout << "can not open invntry file.\n";
        return 1;

    }
    else{
    cout << "--------";
    out << "Radius: " << endl;
    out << "Toasters: " << endl;
    }
    out.close();
    return 0;
}
