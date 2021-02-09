#include<stdio.h>
int main()
{
    int i,j,n,a[3][3],s,s1,count;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("value of [%d][%d]: \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    s1=s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
            if(j==i || j>i)
            s+=a[i][j];
            else
            s1+=a[i][j];

        }

        printf("\n");
    }
    printf("%d\n%d",s1,s);

    return 0;
}
