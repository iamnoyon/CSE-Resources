    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int i,n,sum=0;
        printf("enter the value of n: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum=sum+i*(i+1);
        }
        printf("Summation is: %d",sum);
        getchar();
    }
