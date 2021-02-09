#include<iostream>
using namespace std;
template <class X> void bubble(X *items,int count)
{
    int a,b;
    X t;

    for(a=1;a<count;a++)
    {
        for(b=count-1;b>=a;b--)
        {
            if(items[b-1]>items[b])
            {
                t=items[b-1];
                items[b-1]=items[b];
                items[b]=t;
            }
        }
    }
}
int main()
{
    int arr[7] = {7,5,4,3,9,2,8};
    int i;
    cout << "unsorted array: ";
    for(i=0;i<7;i++)
    {
        cout << arr[i] << "  ";
    }
    cout <<endl;
    bubble(arr,7);
    cout << "sorted array: ";
        for(i=0;i<7;i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;



}
