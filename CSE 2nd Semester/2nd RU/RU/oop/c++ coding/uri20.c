#include<stdio.h>
int main()
{
    double n;
    int t100,t50,t20,t10,t5,t2;
    printf("Enter the amount of taka: ");
    scanf("%lf",&n);
    t100=n/100.00;
    t50=(n-t100)/50.00;
    t20=(t100-t50)/20.00;
    t10=(t50-t20)/10.00;
    t5=(t20-t10)/5.00;
    t2=(t10-t5)/2.00;
    printf("NOTAS: \n");
    printf("%d Nota de R$ 100.00\n",t100);
    printf("%d Nota de R$ 50.00\n",t50);
    printf("%d Nota de R$ 20.00\n",t20);
    printf("%d Nota de R$ 10.00\n",t10);
    printf("%d Nota de R$ 5.00\n",t5);
    printf("%d Nota de R$ 2.00\n",t2);

    return 0;

}
