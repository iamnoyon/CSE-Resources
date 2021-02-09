#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter the value of marks: ");
    scanf("%d", &marks);
    if(marks>=80)
        printf("Results is: A+");
    else if(marks>=70)
        printf("Results is: A");
    else if(marks>=60)
        printf("Results is: A-");
    else if(marks>=50)
        printf("Results is: B");
    else if(marks>=40)
        printf("Results is: C");
    else if(marks>=33)
        printf("Results is: D");
    else
        printf("Results is: Fail");
    getchar();
};
