#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum;
    FILE *fp;
    fp=fopen("D:\\file\\file1.txt","w");

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    sum=a+b;

    printf("sum=  %d",sum);
    fprintf(fp,"sum=  %d",sum);
    getchar();
}
