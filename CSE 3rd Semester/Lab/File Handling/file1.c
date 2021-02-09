#include<stdio.h>
main()
{
    FILE *f;
    f=fopen("input.txt","w");

    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        fprintf(f,"    %d",i);
        printf("    %d",i);
    }
    return 0;
}
