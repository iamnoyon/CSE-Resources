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
printf("\nSorted form of the numbers\n");

for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(number[i]>number[j])
        {
        int a = number[i];
        number[i]=number[j];
        number[j]=a;
        }

    }
}
for(int i=0; i<n; i++)
{
    printf("numbers[%d] = %d",i,number[i]);
    printf("\n");
}
printf("\n");
int first=0,
    last=n-1,
    mid=(first+last)/2,
    search;

    printf("Enter the number that you want to search: ");
    scanf("%d",&search);
for(int i=0;i<n;i++)
{
     if(number[mid]==search)
    {
        printf("Your Number %d is found in index Number %d",search,mid);
        break;
    }
    else if(number[mid]>search)
    {
        last=mid-1;
        mid=(first+last)/2;
    }
    else if(number[mid]<search)
    {
        first=mid+1;
        mid=(first+last)/2;
    }

}
if(first>last)
    {
        printf("The number is not found");
    }
return 0;
}
