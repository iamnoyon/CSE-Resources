#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int top=-1;
int maxstck=20;
int arr[50];
char str[50];

void push(int item)
{
	if(top>maxstck-2) {cout<<"Overflow";return;	}
	top++;
	str[top]=item;	

}

int pop()
{
	//if(top<0){cout<<"underflow";return 0;}
	return str[top--];
	
}
int main()
{
	int i,item,len;
	string str;
	cin>>str;
	len=str.size();
	//cout<<"len"<<len<<endl;
	for(int i=0;i<len;i++){
	if(isdigit(str[i]))
	{
	//cout<<"i= "<<str[i];
		push(str[i]-'0');
	}
	else if(str[i]=='+')
	{
		int a,b,oper;
		a=pop();
		cout<<a;
		b=pop();
		cout<<b;
		oper=a+b;
		//cout<<oper<<endl;
		push(oper);

	}
	else if(str[i]=='-')
	{
	int a,b,oper;
		a=pop();
		b=pop();
		oper=a-b;
		push(oper);
	}
	else if(str[i]=='*')
	{
		int a,b,oper;
		a=pop();
		b=pop();
		oper=a*b;
		push(oper);
	}
	else if(str[i]=='/')
	{
		int a,b,oper;
		a=pop();
		b=pop();
		oper=a/b;
		push(oper);
	}
	else if(str[i]=='^')
	{
		int a,b,oper;
		a=pop();
		b=pop();
		oper=pow(b,a);
		push(oper);
	}

	else if(str[i]==')')
	{
		int final;
		final=pop();
		cout<<final;

	}}
	/*for(i=0;i<6;i++)
	{
		cin>>item;
		push(item);		
	}
//push(100);

	for(i=0;i<6;i++)
	{
		
		cout<<pop();		
	}
		//cout<<pop();*/		

	return 0;
}

