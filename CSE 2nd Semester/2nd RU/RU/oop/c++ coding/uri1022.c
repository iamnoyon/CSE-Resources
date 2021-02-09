#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(D>A)
        {
            if((C+D)>(A+B))
            {
                if(B>C)
                {
                    if(C>0 && D>0 && A%2==0)
                    printf("Valores aceitos\n");
                }
                else
                {
                    if(A%2!=0)
                    printf("Valores nao aceitos\n");
                }
            }

        }
    return 0;
}
