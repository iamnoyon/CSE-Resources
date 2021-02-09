#include<stdio.h>
int main()
{
    int em_num,m_hour;
    double per_money,salary;
    scanf("%d",&em_num);
    scanf("%d",&m_hour);
    scanf("%lf",&per_money);

    salary = (m_hour*per_money);
    printf("NUMBER = %d\n",em_num);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}
