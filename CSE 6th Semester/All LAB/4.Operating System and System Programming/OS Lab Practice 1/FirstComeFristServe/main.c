#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("The number of input:");
    scanf("%d",&n);
    int ara[n];
    float avgWT=0,avgTAT=0;
    int i;
    //..............Taking Input...................
    for(i=0;i<n;i++){
        printf("P%d = ",i+1);
        scanf("%d",&ara[i]);
    }
    //.............Gantt Chard Output...................
    printf("\nThe gantt chart:\n\n");
    for(i=0;i<n;i++){
        printf("|P%d",i+1);
        int x=ara[i];
        while(x!=0){
            printf("-");
            x--;
        }
        printf("|");
    }
    printf("\n\n");

    //.............waiting Time & Turnaround Time.............
    for(i=0;i<n;i++){
        if(i==0){
            printf("Waiting Time of P%d=0\n",i+1);
            printf("Turnarround Time of P%d=%d\n\n",i+1,0+ara[i]);
        }else{
            int j,time=0;
            for(j=0;j<i;j++){
                time+=ara[j];
                }
            printf("Waiting Time of P%d=%d\n",i+1,time);
            avgWT=avgWT+time;
            printf("Turnarround Time of P%d=%d\n\n",i+1,time+ara[i]);
            avgTAT=avgTAT+time+ara[i];
        }
    }
    printf("Average Wait Time = %0.2lf\n",avgWT/n);
    printf("Average Turnarround Time = %0.2lf\n",avgTAT/n);
    return 0;
}
