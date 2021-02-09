#include<iostream>
using namespace std;
static int count = 10;
void func(void)
{
    static int i= 5;
    i++;
    std :: cout << "i " << "is " << i << " and count is " << count << "\n";

}
int main()
{
    while(count--)
    func();
    return 0;
}
