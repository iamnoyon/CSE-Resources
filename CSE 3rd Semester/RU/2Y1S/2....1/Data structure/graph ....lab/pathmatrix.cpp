#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,i,j,k,counter=0;

    cout << "Enter the size of the array: ";
    cin >> m;

    long A[m][m],A2[m][m],A3[m][m],A4[m][m],B4[m][m],p[m][m];

    cout << "Enter the array1:  ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            A2[i][j]=0;
            for(k=0;k<m;k++)
            {
                A2[i][j]=A2[i][j]+A[i][k]*A[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            A3[i][j]=0;
            for(k=0;k<m;k++)
            {
                A3[i][j]=A3[i][j]+A2[i][k]*A[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            A4[i][j]=0;
            for(k=0;k<m;k++)
            {
                A4[i][j]=A4[i][j]+A2[i][k]*A2[k][j];
            }
        }
    }

    cout << "B4:::  ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            B4[i][j] = A[i][j]+A2[i][j]+A3[i][j]+A4[i][j];
            if(B4[i][j]!=0)
            p[i][j] = 1;
            else
            {
                p[i][j] = 0;
                counter++;

            }
            cout << B4[i][j] << "  ";
        }
        cout << endl;

    }
    cout << endl;

    cout<<"Path Matrix :"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    if(counter!=0)
    {
        cout << "This is not strongly connected.....";
    }
    else
    cout << "This is strongly connected.........";
    cout << endl;
    return 0;
}

