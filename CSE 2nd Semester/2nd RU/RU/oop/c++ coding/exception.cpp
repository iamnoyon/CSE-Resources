#include<iostream>
using namespace std;

int main()
{

    cout << "devit \n";
    try
    {
      cout << "start the program" << "\n";
      throw 10;
      cout << "this will not execute \n";
    }
 catch(int i)
 {
     cout << "cautch an expresion.....value is: " << i << "\n";

 }
 cout << "end";
 return 0;
}
