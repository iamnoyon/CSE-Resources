#include<iostream>
using namespace std;
class studyhome{
    int room;
    int bed;
  public:
    studyhome();
    ~studyhome();
    void room(int n){room = n;}
    int room_n();


};
studyhome::studyhome(int n)
{
   room=n;
   cout << "constracted variable \n";
}
studyhome::~studyhome()
{
    cout << "class destroyed\n";

}
void studyhome::room(int n)
{
    cout << "the room number of our studyhome\n";

}
int studyhome::room_n()
{
    return n;
}
int main()
{
 studyhome obj;
 obj.room(50);
 cout << ob.room_n <<"\n";
 return 0;
}








