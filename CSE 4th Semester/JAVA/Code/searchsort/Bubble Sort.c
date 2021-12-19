#include<stdio.h>
main(){
int n;
printf("Enter the numbers of element: ");
scanf("%d",&n);
int number[n];
printf("\nEnter your numbers:\n\n");
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = ",i);
    scanf("%d",&number[i]);
}
printf("\nUnSorted form of the numbers\n");
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = %d",i,number[i]);
    printf("\n");
}

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(number[i]>number[j])
        {
            int a=number[j];
            number[j]=number[i];
            number[i]=a;
        }
        else
        {
            i=j;
        }
    }
}
printf("\n\nSorted form of the numbers(Ascending Order)\n");
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = %d",i,number[i]);
    printf("\n");
}

}
