#include<stdio.h>
main()
{
    int n,i;
    printf("Enter the number of items:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the items:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("your items are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",num[i]);
    }
    int beg=1,end=n,mid=(beg+end)/2,item;
    printf("Enter the items search:");
    scanf("%d",&item);



return 0;
}

