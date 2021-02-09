#include<iostream>
#include<stdio.h>


main()
{
    int a[10],i=0,n=0,item=0,loc=0;



    printf("Enter 10 interger value: \n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
    }


    printf("\nThe inserted values are:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    printf("Enter Which item you want to insert in which location:\n");
    scanf("%d %d",&item,&loc);

    for(i=n;i>=loc;i++)
    {
        a[i]=a[i-1];
    }
    a[loc]=item;

    printf("\nThe inserted values are:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }


}

