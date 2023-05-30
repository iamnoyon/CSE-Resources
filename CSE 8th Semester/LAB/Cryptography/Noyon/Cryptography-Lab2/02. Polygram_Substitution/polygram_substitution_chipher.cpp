#include<bits/stdc++.h>
using namespace std;

map<string, string>en_blocks, dec_blocks;

void dictionary(){
    string w1,w2;

    ifstream input;
    input.open("blocks.txt");

    while(input>>w1>>w2){
        en_blocks[w1] = w2;
        dec_blocks[w2] = w1;
    }
}

string encrypt(string msg){
    string cipher = "", tmp = "";

    for(int i = 0; i < msg.size(); i++){
        if((msg[i]>='A'&&msg[i]<='Z')||(msg[i]>='a'&&msg[i]<='z')){
            tmp += msg[i];
            //cout<<tmp<<endl;
            if(en_blocks.find(tmp) != en_blocks.end()){
                cipher += en_blocks[tmp];
                tmp = "";
            }
        }
        else cipher += msg[i];
    }

    return cipher;
}

string decrypt(string cipher){
    string msg = "", tmp = "";

    for(int i = 0; i < cipher.size(); i++){
        if((cipher[i]>='A'&&cipher[i]<='Z')||(cipher[i]>='a'&&cipher[i]<='z')){
            tmp += cipher[i];
            //cout<<tmp<<endl;
            if(dec_blocks.find(tmp) != dec_blocks.end()){
                msg += dec_blocks[tmp];
                tmp = "";
            }
        }
        else msg += cipher[i];
    }

    return msg;
}


int main(){

    string msg;
    string cipher;

    ifstream input;
    ofstream output;

    input.open("in.txt");
    output.open("out.txt");

    dictionary();

    getline(input, msg);

    cipher = encrypt(msg);
    msg = decrypt(cipher);

    cout<<"Original message : "<<msg<<endl;
    cout<<"Cipher message : "<<cipher<<endl;

    output<<"Original message : "<<msg<<endl;
    output<<"Cipher message : "<<cipher<<endl;

    input.close();
    output.close();

    return 0;
}
