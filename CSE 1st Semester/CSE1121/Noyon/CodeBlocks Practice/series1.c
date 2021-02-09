/*Print the number 0,1,2,3,4,............,n*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("  %d",i);
    }
    getchar();
};
