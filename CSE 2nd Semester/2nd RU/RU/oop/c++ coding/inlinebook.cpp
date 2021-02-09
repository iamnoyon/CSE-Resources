#include<iostream>
#include<cstring>
using namespace std;

const int IN= 1;
const int checked_out = 0;
class book {
    char author[40];
    char title[40];
    int status;
    public:
    book(char *n, char *t, int s);
    int get_status(){return status;}
    void set_status(int s){status = s;}
    void show();
//    void show();

};
book::book(char *n, char *t, int s)
{
    strcpy(author, n);
    strcpy(title, t);
    status = s;

}
void book::show()
{
    cout << title <<" by " << author;
    cout << " is ";
    if(status==IN)
    cout << " IN\n ";
    else
    cout << " out\n ";

}
int main()
{
    book b1("Twin", "Tom Sawer",IN);
    book b2("Melvilli", "Moby dick", checked_out);

    b1.show();
    b2.show();
    return 0;
}

