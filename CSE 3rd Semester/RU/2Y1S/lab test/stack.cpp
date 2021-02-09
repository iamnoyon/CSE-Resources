#include<iostream>
using namespace std;
#define MAX 1200
int stack[MAX],top=-1;
void push(int item){
    top++;
    if(top==MAX){
        cout<<"overflow\n";
        return;
    }
    stack[top]=item;

}
void pop(){
    if(top==-1){
        cout<<"underflow\n";
        return;
    }
    top--;

}
int peek(){
    if(top==-1){
        cout<<"stack is empty \n";
        return 0;
    }

    return stack[top];
}
int main(){
    int item;
    cin>>item;
    push(item);
    cout<<"peek = "<<peek()<<endl;
    pop();
    cout<<peek()<<endl;
    return 0;
}
