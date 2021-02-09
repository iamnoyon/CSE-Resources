#include<stdio.h>
int main()
{
    int e_num,m_hour;
    float p_income,salary;
    printf("Enter the number of employes and total working hour at a mounth: ");
    scanf("%d %d",&e_num,&m_hour);
    printf("Enter the income at per hour: ");
    scanf("%f",&p_income);
    salary = (m_hour*p_income);
    printf("The number of Employe is: %d\n",e_num);
    printf("Salary = U$ %f",salary);
    return 0;
}
