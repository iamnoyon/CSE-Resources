#include<stdio.h>
int main()
{
    int x,y,z,Total_money;
    printf("Enter the presence number of full meal: ");
    scanf("%d",&x);
    printf("\n Enter the number of afternoon meal: ");
    scanf("%d",&y);
    printf("\n Enter the number of Night and morning meal: ");
    scanf("%d",&z);
    Total_money = x*50+y*25+z*25;
    printf("\nTotal cost money: %d",Total_money);
    return 0;
}
