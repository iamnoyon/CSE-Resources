#include<stdio.h>
int main()
{
    int i,j,k,ar[15],even[5],odd[5];
    for(i=0;i<15;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(j=0;j<15;j++)
    {
        if((ar[j]/2)==0)
        {
            for(k=0;k<5;k++)
            {

            printf("even[%d] %d\n",k,even[k]);
            }
        }
        else
        {
            for(k=0;k<5;k++)
            {
                printf("%d\n",odd[k]);
            }

        }
    }
    printf("..............");

    return 0;

}
