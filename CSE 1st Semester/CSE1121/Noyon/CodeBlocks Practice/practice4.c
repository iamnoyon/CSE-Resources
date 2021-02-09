#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,x;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    x= a/ (b-c);
    printf("The result of x is: %f", x);
    getchar();
};
