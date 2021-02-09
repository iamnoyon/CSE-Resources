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
    printf("  %.5lf\n",A);
    printf("   %.5lf\n",B);
    printf("   %.5lf\n",C);
    return 0;
}
