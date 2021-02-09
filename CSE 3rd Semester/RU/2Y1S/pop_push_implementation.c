#include<stdio.h>
#define n 5
int stack[n],top,i;
void push()
{	
	printf("Enter your data...:\n");
	for(top=0;top<n;top++)
	{
		scanf("%d",&stack[top]);
	}
printf("push operation is successfull....\n");
}
void pop()
{
	if(top==0)
	{
		printf("sorry! stack is empty...\n");
	}
	else
	{
	top=top-1;
	printf("\npop operation has successfully delete %d\n",stack[top]);
	}
}
void display()
{
	for(i=top-1;i>=0;--i)
	{
		printf("stack[%d]- %d\n",i+1,stack[i]);
	}
}
int main()
{
	push();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
return 0;
}
