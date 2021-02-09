#include<stdio.h>
int main()
{
    double fixed_salary,t_sales,main_salary;
    char se_name[20];
    scanf("%s",se_name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&t_sales);
    main_salary = fixed_salary+(0.15*t_sales);
    printf("TOTAL = R$ %.2lf\n",main_salary);
    return 0;
}
