#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000000

char str[SIZE];

int encrypt_text(int ch){
    ch = (ch + 3) % 26;
}

int decrypt_text(int ch){
    ch = (ch - 3 + 26) % 26;
}

int main(){
    cout<<"Enter the plain text : ";
    gets(str);

    for(int i = 0; str[i]; i++){
        //if(isupper(str[i])){
        //char p = str[i] - 'A';
    cout<<str[i] - 'A'<<endl;
            str[i] = (char)(encrypt_text((str[i] - 'A')) + 'A');
        }
        else if(islower(str[i])){
            str[i] = (char)(encrypt_text((str[i] - 'a')) + 'a');
        }
    }

    cout<<"Encrypted Text : "<<str<<endl;

    for(int i = 0; str[i]; i++){
        if(isupper(str[i])){
            str[i] = (char)(decrypt_text((str[i] - 'A')) + 'A');
        }
        else if(islower(str[i])){
            str[i] = (char)(decrypt_text((str[i] - 'a')) + 'a');
        }
    }

    cout<<"Decripted Text : "<<str<<endl;

    return 0;
}
