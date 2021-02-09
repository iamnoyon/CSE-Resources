#include<stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    FILE *f;
    f=fopen("input.txt","w");

    for(i=0;i<=n;i++)
    {
        fprintf(f,"     %d",i);
    }
    return 0;
}
