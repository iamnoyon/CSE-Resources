
#include<stdio.h>
int main()
{
    int i,n,item;
    while(1)
    {
    printf("\nEnter How Many Number You Want: \n");
    scanf("%d",&n);

    int a[n];
    printf("Please Enter %d number: \n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your Entered %d number are:\n",n);

    for(i=0;i<n;i++)
    {
        printf("\t\ta[%d]=%d \n",i, a[i]);
    }

    printf("Enter What you want to Search:\n");
    scanf("%d",&item);

     for(i=0;i<n;i++){
        if(item==a[i])
        {
            printf("Location of %d is %d\n", item, i);
        }

     }
    }
}
