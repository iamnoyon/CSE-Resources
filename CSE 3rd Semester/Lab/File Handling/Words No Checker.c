#include<stdio.h>
main()
{
    char a;
    int count=0,line=0,small=0,capital=0,others=0;
    FILE *f;
    f=fopen("input.txt","r");
    while(fscanf(f,"%c",&a) !=EOF)
    {
        if(a==' ')
        {
            count++;
        }
    }
    printf("Spaces = %d",count);
}
