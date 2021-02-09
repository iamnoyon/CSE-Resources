#include<stdio.h>
int main()
    {
       int i=0,n,item=0,loc;
       int item1=0,loc1=0;
       printf("Please enter how number you Want:");
       scanf("%d",&n);
       int a[n+5];

       printf("Please Enter %d Number:",n);

       for(i=0;i<n;i++)
       {

       scanf("%d",&a[i]);
       }
   // Traversing Algorithm
        for(i=0;i<n;i++)
          {
       printf("\n Your Entered number a[%d]= %d",i,a[i]);
         }

         printf("\nEnter Which number you want to Search: ");
         scanf("%d",&item);
     //Searching Algorithm
         for(i=0;i<n;i++)
         {
             if(item==a[i])
             {
                 loc=i;
                 break;
             }
         }
         printf("\nYour Searched %d  position=%d",item,loc);

         //Inserting Algorithm
         printf("\n\nPlease Enter which Item you want to insert Which Location:  ");
         scanf("%d %d",&item1,&loc1);

         for(i=n;i>=loc1;i--)
         {
             a[i]=a[i-1];
         }
         a[loc1]=item1;
         n=n+1;

       for(i=0;i<n;i++)
          {
       printf("\n Your new Entered number a[%d]= %d",i,a[i]);
         }



    }
