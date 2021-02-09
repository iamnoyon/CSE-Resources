#include<stdio.h>
int main()
{
    float A,B,C,media;
    printf("please enter the two number: ");
    scanf("%f %f %f",&A,&B,&C);
    media = (A*2+B*3+C*5)/10.0;
    printf("\nMEDIA = %.1f",media);
return 0;
}
