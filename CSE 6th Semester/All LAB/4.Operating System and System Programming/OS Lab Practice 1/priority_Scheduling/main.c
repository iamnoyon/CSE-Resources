#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("The number of input:");
    scanf("%d",&n);
    int ara[n];
    int ara1[n];
    int ara2[n];
    int i,j;
    float avgWT=0,avgTAT=0;
    //..............Taking Input...................
    for(i=0; i<n; i++)
    {
        printf("Burst time of P%d = ",i+1);
        scanf("%d",&ara[i]);
        fflush(stdin);
        printf("priority of P%d = ",i+1);
        scanf("%d",&ara1[i]);
    }

    for(i=0; i<n; i++)
    {
        int x=i+1;
        for(j=0; j<n; j++)
        {
            if(x==ara1[j])
            {
                int a=j+1;
                ara2[i]=a;
                ara1[j]=-1;
                break;
            }

        }
    }


//.............Gantt Chard Output...................

    printf("\nThe gantt chart:\n\n");

    for(i=0; i<n; i++)
    {
        int x=ara2[i]-1;
        int y=ara[x];
        printf("|P%d",ara2[i]);
        while(y!=0)
        {
            printf("-");
            y--;
        }
        printf("|");

    }
    printf("\n\n");

    //.............waiting Time & Turnaround Time.............
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            int  x=ara2[i]-1;
            printf("Waiting Time of P%d=0\n",ara2[i]);
            printf("Turnarround Time of P%d=%d\n\n",ara2[i],0+ara[x]);
        }
        else
        {
            int y=0;
            int time=0;
            for(j=0; j<i; j++)
            {
                int x1=ara2[j]-1;
                y=ara2[j+1]-1;
                time+=ara[x1];
            }
            printf("Waiting Time of P%d=%d\n",ara2[i],time);
            avgWT=avgWT+time;
            printf("Turnarround Time of P%d=%d\n\n",ara2[i],time+ara[y]);
            avgTAT=avgTAT+time+ara[y];
        }
    }
    printf("Average Wait Time = %0.2lf\n",avgWT/n);
    printf("Average Turnarround Time = %0.2lf\n",avgTAT/n);
    return 0;
}
