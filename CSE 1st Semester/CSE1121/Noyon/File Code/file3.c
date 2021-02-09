#include<stdio.h>
#include<conio.h>
int main()
{
    char a[30]="My Name Is Mahamudul Hassan";
    FILE *fp;
    fp=fopen("D:\\file\\file2.txt","w");

        printf("%s",a);
        fprintf(fp,"%s",a);
        getchar();
}
