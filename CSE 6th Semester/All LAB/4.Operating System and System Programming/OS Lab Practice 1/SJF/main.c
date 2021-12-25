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
    float avgWT=0,avgTAT=0;
    int i,j;
//..............Taking Input...................
    for(i=0;i<n;i++){
        printf("P%d = ",i+1);
        scanf("%d",&ara[i]);
        ara1[i]=ara[i];
    }
//............sort the list by bubble sort................
   for(j=n;j>=1;j--){
    for(i=0;i<j;i++){
        int temp;
        if(ara[i]>ara[i+1]){
           temp=ara[i];
           ara[i]=ara[i+1];
           ara[i+1]=temp;
        }
     }
   }
    for(i=0;i<n;i++){
        int x=ara[i];
        for(j=0;j<n;j++){
            if(x==ara1[j]){
                int a=j+1;
                ara2[i]=a;
                ara1[j]=0;
                break;
            }
        }
    }

//.............Gantt Chard Output...................
    printf("\nThe gantt chart:\n\n");
    for(i=0;i<n;i++){
        int x=ara[i];
        printf("|P%d",ara2[i]);
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
            printf("Waiting Time of P%d=0\n",ara2[i]);
            printf("Turnarround Time of P%d=%d\n\n",ara2[i],0+ara[i]);
        }else{
            int time=0;
            for(j=0;j<i;j++){
                time+=ara[j];
                }
            printf("Waiting Time of P%d=%d\n",ara2[i],time);
            avgWT=avgWT+time;
            printf("Turnarround Time of P%d=%d\n\n",ara2[i],time+ara[i]);
            avgTAT=avgTAT+time+ara[i];
        }
    }
    printf("Average Wait Time = %0.2lf\n",avgWT/n);
    printf("Average Turnarround Time = %0.2lf\n",avgTAT/n);
    return 0;
}
