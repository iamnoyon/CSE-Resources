#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
   for(i=2; i<n; i++)
    {
        for(j=2; j<n; j++)
        {
          if(!(i%j))

              break;
              //else
            //  printf("%d",j);//

        }
          if(j>(i/j))
          printf("prime number: %d %d is not prime\n",i,i+1);


    }
    return 0;

}
