#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int i,n;

    fp=fopen("D:\\file\\input1.txt","w");

    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("     %d",i);
        fprintf(fp,"     %d",i);
    }

    getchar();
}
