#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,D,e,f;
    scanf("%f %f %f",&A,&B,&C);
    D = ((B*B)-(4*A*C));
    if(D<0){
    printf("Impossivel calcular");
    }
    else if(A==0){
    printf("Impossivel calcular");
    }
    else{
    e = (-B+sqrt(D))/(A+A);
    f = (-B-sqrt(D))/(A+A);
    printf("R1 = %.5f\n",e);
    printf("R2 = %.5f\n",f);
    }
    return 0;
}
