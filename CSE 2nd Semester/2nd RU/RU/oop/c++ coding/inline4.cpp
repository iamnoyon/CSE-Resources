#include<iostream>
#include<cstring>
using namespace std;

class addition{

    int a,b;
    public:
    void set_id(int x,int y);
    void show();

};
inline void addition::set_id(int x,int y){
   a=x;
   b=y;

}
inline void addition::show(){

    cout << "addition :" << a+b <<endl;
}
int main()
{
    char str[80];
    addition n;
    n.set_id(5,6);
    n.show();
    cin >> str;
    cout << str;
    return 0;
}
