/*Print the number 2,4,6,8,10,............,n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("   %d",i);
    }
    getchar();
};
