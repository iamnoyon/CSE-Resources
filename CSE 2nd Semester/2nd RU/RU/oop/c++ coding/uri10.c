#include<stdio.h>
int main()
{
    int N,h,m,s;
    printf("Enter the Secound: ");
    scanf("%d",&N);
    h=N/3600;
    m=N/60;
    s=N%60;
    if(m<60)
    printf("%d:%d:%d",h,m,s);
    else
    {
    m=m%60;
    printf("%d:%d:%d",h,m,s);

    }

    return 0;
}
