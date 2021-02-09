#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,rem;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    rem=a%b;
    printf("The output of remainder is: %d", rem);
    getchar();
};
