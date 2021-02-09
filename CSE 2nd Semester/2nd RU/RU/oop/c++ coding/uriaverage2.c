#include<stdio.h>
int main()
{
    int a,b,c,d,difference;
    printf("Enter the integer number: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    difference = a*b-c*d;
    printf("Difference: %d",difference);
    return 0;
}
