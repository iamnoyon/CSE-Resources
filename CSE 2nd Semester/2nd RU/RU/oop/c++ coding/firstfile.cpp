#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10][10],count;
    cout << "enter the value of count: ";
    cin >>count;
    for(i=0;i<=count;i++)
    {
        for(j=0;j<=count;j++)
        {

        cin >> a[i][j];

        }
    }
    for(i=0;i<=count;i++)
    {
        for(j=0;j<=count;j++)
        {
            cout << a[i][j];
        }
    }
    return 0;
}
