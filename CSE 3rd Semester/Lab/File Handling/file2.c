#include<stdio.h>
main()
{
    char a[100]="computer science and engineering";

    FILE *f;
    f=fopen("fileinput.txt","w");

    fprintf(f,"%s",a);
    return 0;
}
