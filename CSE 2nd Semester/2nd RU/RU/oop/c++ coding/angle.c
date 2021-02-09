#include<stdio.h>

int main()
{
    double a,b,c,A,B,C,e,f,g;
    printf("Enter the positive number: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    e = ((b*b)+(c*c)-(a*a))/(2*b*c);
    A = acos(e);
    f = ((a*a)+(c*c)-(b*b))/(2*a*c);
    B = acos(f);
    g = ((a*a)+(b*b)-(c*c))/(2*a*b);
    C = acos(g);
    printf("  %.5lf\n",(A*180)/3.1416);//result wiil be in radian,so 1 degree is equal to pi/180...converted to degree by 1 radian is equal to 180/pi;;;
    printf("   %.5lf\n",(B*180)/3.1416);
    printf("   %.5lf\n",(C*180)/3.416);
    return 0;
}
