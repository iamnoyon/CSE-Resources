#include<iostream>
using namespace std;

int mod(int, int);

int main()
{
	int x,y,m;
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter second number : ";
	cin>>y;
	m=mod(x,y);
	cout<<"The result of mod operator is : "<<m;


	return 0;
}
int mod(int a,int b)
{

	int r;
	r=a%b;
	return r;
}
