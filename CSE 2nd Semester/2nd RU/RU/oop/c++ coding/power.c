#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c,d,l,i,n,g,f,e;
     n=10;
    scanf("%d %d",&a,&b);
    c = pow(a,b);
    //printf("\nEnter the last number l: ");
    //scanf("%d",&l);
    printf("%d\n",c);
    d = c%10;
    e = c/10;
    f = e%10;
    g = d + f;
    printf("\n %d",g);
    return 0;
}
