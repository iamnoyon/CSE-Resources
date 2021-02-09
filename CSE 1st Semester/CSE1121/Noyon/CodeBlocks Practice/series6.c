/*Print the number 5,10,15,20,............,n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=5;i<=n;i=i+5)
    {
        printf("   %d",i);
    }
    getchar();
};
