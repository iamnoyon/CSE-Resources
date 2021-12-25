#include <stdio.h>
    int main()
    {
        int i,n,a[100];
        FILE *fp,*fo,*fe;
        fp=fopen("a.in","r");
        fo=fopen("b.out","w");
        fe=fopen("c.out","w");
        printf("How many number: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            fscanf(fp,"%d",&a[i]);
        for(i=0;i<n;i++){
            if(a[i]%2!=0)
            fprintf(fo,"%d\n",a[i]);
        }
        for(i=0;i<n;i++)
            {
            if(a[i]%2==0)
            fprintf(fe,"%d\n",a[i]);
        }
    }




