/*Print the number 2+4+6+8+............+n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i++)
    {
        sum=sum+(2*i);
    }
    printf("%d",sum);
    getchar();
};
