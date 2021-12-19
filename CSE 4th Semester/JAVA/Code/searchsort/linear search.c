#include<stdio.h>
main(){
int n,i;
printf("Enter the numbers of element: ");
scanf("%d",&n);
int number[n];
printf("\nEnter your numbers:\n\n");
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = ",i);
    scanf("%d",&number[i]);
}
printf("\nYour Entered numbers are\n");
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = %d",i,number[i]);
    printf("\n");
}
int search;

printf("Enter the number that you want to search: ");
scanf("%d",&search);

for(i=0; i<n; i++)
{
    if(number[i]==search)
    {
        printf("Your Number %d is found in index Number %d",search,i);
        break;

    }
}
if(i==n)
{
    printf("\nThe number is not found\n");
}
return 0;
}
