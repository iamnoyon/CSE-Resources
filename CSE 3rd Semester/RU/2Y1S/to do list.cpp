#include<bits/stdc++.h>
using namespace std;
int size=1,currentpostion=1;
class mytodo{
public:
    string description;
    string duedate;
    string taskname;
};
class mytodo mytodolist[100];
bool add(string taskname,string description,string duedate){
    if(size<100){
        mytodolist[size].description=description;
        mytodolist[size].duedate=duedate;
        mytodolist[size].taskname=taskname;
        size++;
        return true;
    }
    else{
        return false;
    }
}
void deletetodo(int tasknumber){
    int index=1;
    while(tasknumber<size){
        mytodolist[tasknumber]=mytodolist[index+1];
        tasknumber++;
    }
    size--;
}
void show(){
    for(int index=1;index<size;index++){
        cout<<index<<":"<<mytodolist[index].taskname<<"  "<<mytodolist[index].duedate<<endl;
        cout<<mytodolist[index].description<<endl;
    }
}
int main(){
    int choice,tasknumber;
    string description,duedate,taskname;
    while(1){
        cout<<"Enter -1 to terminate the program"<<endl;
        cout<<"Enter 1 to add a new item in the list"<<endl;
        cout<<"Enter 2 to delete a item from the list"<<endl;
        cout<<"Enter 3 to see the Remaining item in the list"<<endl;
        cin>>choice;
        if(choice==-1) break;
        if(choice==1){
            getchar();
            cin>>taskname;
            cin>>description;
            cin>>duedate;
            add(taskname,description,duedate);
        }
        else if(choice==2){
            cout<<"Enter tasknumber that you want to delete\n";
            cin>>tasknumber;
            deletetodo(tasknumber);
        }
        else if(choice==3){
            show();
        }
    }
    return 0;
}
