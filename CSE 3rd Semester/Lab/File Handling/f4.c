#include<stdio.h>
main()
{
    int i,n,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {

            if(i==j)
                printf("%d",i);
            else
                printf("\n");
        }
    }

    return 0;
}
