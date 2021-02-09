#include<stdio.h>
main()
{
    char a;
    FILE *f,*f1;
    f=fopen("input.txt","r");
    f1=fopen("output.txt","w");
    while(fscanf(f,"%c",&a) !=EOF)
    {
        if(a>='A' && a<='Z')
        {
            fprintf(f1,"%c",a+32);
        }
        else
            {
                fprintf(f1,"%c",a);
            }
    }
return 0;
    }


