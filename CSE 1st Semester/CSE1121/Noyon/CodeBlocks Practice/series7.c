/*Print the number 4,8,12,16,20,............,n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=4;i<=n;i=i+4)
    {
        printf("   %d",i);
    }
    getchar();
};
