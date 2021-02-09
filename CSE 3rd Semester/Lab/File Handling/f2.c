#include<stdio.h>
main()
{

    char a[]="Computer Science and Engineering";
    FILE *f;
    f=fopen("input.txt","w");

    fprintf(f,"%s",a);
    return 0;
}
