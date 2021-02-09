#include<iostream>
#include<cstring>
using namespace std;

class phonebook
{
    public:
        char name[30];
        int roll;
        int mobile_num;
        phonebook(char *n,int r,int m)
        {
            strcpy(name,n);
            roll=r;
            mobile_num=m;
        }
};
ostream &operator<<(ostream &stream, phonebook d)
{
    stream << d.name<<"   ";
    stream << d.roll << "  ";
    stream << d.mobile_num;
    return stream;
}
int main()
{
    phonebook a("HIMALOY",1710776108,1762739522);
    cout << a;
    return 0;
}
