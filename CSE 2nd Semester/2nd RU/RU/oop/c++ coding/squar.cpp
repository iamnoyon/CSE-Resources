#include<iostream>
using namespace std;
int main(){
int n,m,a,l,w,t;
cin>> n>>m>>a;
if(n%a==0){
    l=n/a;
}
else{
    l=n/a;
    l++;
}

if(m%a==0){
 w=m/a;
}
else{
 w=m/a;
 w++;
}
t=l*w;

cout<<t;
return 0;
}
