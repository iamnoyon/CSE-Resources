/*Print the number A,,B,C,D,............,Z*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char i;
    for(i='z';i>='a';i--)
    {
        printf("   %c",i);
    }
    getchar();
};
