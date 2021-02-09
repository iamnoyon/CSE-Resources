#include<stdio.h>


void main()
{
    int i=1,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("\nThis is for loop:\n");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",i);
    }
   i=1;
    printf("\nThis is  while loop:\n");
    while(i<=n)
    {
        printf(" %d ",i);
        i++;
    }

    i=1;

    printf("\nThis is Do while loop:\n");
    do{
        printf(" %d ",i);

        i++;
    }while(i<=n);
   printf("\nsdkf;");
    };


