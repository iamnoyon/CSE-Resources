#include<iostream>
using namespace std;
#define MAX 1200
int queue[MAX],top=-1;
void push(int item){
    top++;
    if(top==MAX){
        cout<<"overflow\n";
        return;
    }
    queue[top]=item;
}
void pop(){
    if(top==-1){
        cout<<"underflow\n";
        return;
    }
    for(int i=0;i<top;i++){
        queue[i]=queue[i+1];
    }
    top--;
}
int front(){
    if(top==-1){
        cout<<"empty\n";
        return -1;
    }
    return queue[0];

}
int main(){
    int item;
    for(int i=4;i<=10;i++){
        push(i);
    }
    while(front()!=-1){
        cout<<front()<<endl;
        pop();
        cout<<"s="<<front()<<endl;
    }
    return 0;
}
