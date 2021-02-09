/*Print the number 1,3,5,7,............,n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("   %d",i);
    }
    getchar();
};
