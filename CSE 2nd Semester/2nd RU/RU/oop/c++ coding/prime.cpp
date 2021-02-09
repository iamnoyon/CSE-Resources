#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int count=0;
    int sum=0;
    cout << " Enter the last number ";
    cin >> n;
    for(i=2; i<n; i++)
    {
        for(j=2; j<n; j++)
        {
          if(!(i%j))

              break;

        }

          if(j>(i/j)){
          cout << i << " is prime \n";
          count = count + 1;
          sum=sum+i;
          }

    }
    cout << "total prime number of that range is: " << count <<endl;
    cout << "sum of all prime number in that range is: " << sum ;
    return 0;
}
