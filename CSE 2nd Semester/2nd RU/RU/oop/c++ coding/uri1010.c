#include<stdio.h>
int main()
{
    int n_code1,n_code2,unitsofpro1,unitsofpro2;
    double per_money1,per_money2,pai_money;
    scanf("%d %d %lf",&n_code1,&unitsofpro1,&per_money1);
    scanf("%d %d %lf",&n_code2,&unitsofpro2,&per_money2);
    pai_money = ((unitsofpro1*per_money1) + (unitsofpro2*per_money2));
    printf("VALOR A PAGAR: R$ %.2lf\n",pai_money);
    return 0;
}
