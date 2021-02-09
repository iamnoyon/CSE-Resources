#include<stdio.h>
#include<math.h>
int main()
{
    double r,pi,perimeter;
    int c;
    scanf("%lf",&r);
     c = sqrt(r);
    pi = acos(-1);// Cos(pi)=-1;acos means cos inverse;
    perimeter = 2*pi*r;
    printf("perimeter: %.5lf\n",perimeter);
    printf("%d",c);
    return 0;

}
