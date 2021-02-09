#include<stdio.h>
int main()
{
    double A,B,C,t_ar,c_ar,trap_ar,sq_ar,rec_ar;
    scanf("%lf %lf %lf",&A,&B,&C);
    t_ar = 0.5*A*C;
    c_ar = 3.14159*C*C;
    trap_ar = 0.5*C*(A+B);
    sq_ar = B*B;
    rec_ar = A*B;
    printf("TRIANGULO: %.3lf\n",t_ar);
    printf("CIRCULO: %.3lf\n",c_ar);
    printf("TRAPEZIO: %.3lf\n",trap_ar);
    printf("QUADRADO: %.3lf\n",sq_ar);
    printf("RETANGULO: %.3lf\n",rec_ar);
    return 0;
}
