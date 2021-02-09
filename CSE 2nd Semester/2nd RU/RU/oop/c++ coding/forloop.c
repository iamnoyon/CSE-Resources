#include<stdio.h>

int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    for(i=1;i<9;i++)
{
    printf("palendrom:%d\n",i);
           // i++;
}
i=1;
m=11;
for(i=1;i<n;i++){

    m=i*m;
    printf("palandrem:%d\n",m);
}
m=100;
 for(j=1;j<n;j++)
 {
     m+=1;
     printf("%d",m);
     m=m+10;

 }

return 0;
}
