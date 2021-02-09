/*write a c program that reads a line from a file and display the output in another file with uppercase letter*/
#include<stdio.h>
main()
{
    char a;
    FILE *f1,*f2;
    f1=fopen("fileinput.txt","r");
    f2=fopen("fileoutput.txt","w");

    while(fscanf(f1,"%c",&a)!=EOF)
    {
        if(a>='a' && a<='z')
        {
           fprintf(f2,"%c",a-32);
           printf("%c",a-32);
        }
        else
        {
            fprintf(f2,"%c",a);
            printf("%c",a);
        }
    }
    return 0;
}
