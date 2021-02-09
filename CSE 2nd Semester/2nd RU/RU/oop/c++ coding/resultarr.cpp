#include<iostream>
#include<iomanip>
int main()
{
char *stew[]={"Maths","Physics","Chemestry"};
int mark[]={90,77,69};
for(int i=0;i<3;i++)
{
cout<<setw(10)<<sub[i]<<setw(3)<<"="<<setw(4)<<mark[i]<<endl;
}
return 0;
}
