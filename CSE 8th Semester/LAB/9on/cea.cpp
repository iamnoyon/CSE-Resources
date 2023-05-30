#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
char msg[MAX];

string ce_encrypt(string msg){
    for(int i = 0; msg[i]; i++){
        if(isupper(msg[i])){
            msg[i] = (char)((((msg[i] - 'A')+3)%26)+'A');
        }
        else if(islower(msg[i])){
            msg[i] = (char)((((msg[i] - 'a')+3)%26)+'a');
        }
    }
    return msg;
}
string otp_encrypt(string ce_chi){
    string otp;
    ifstream input("ran_str.txt");
    input>>otp;

    for(int i = 0; i <= ce_chi.size(); i++){
        if(isupper(ce_chi[i])){
            ce_chi[i]= (char)(((ce_chi[i] - 'A') + (otp[i] - 'A')) % 26 + 'A');
        }
        else if(islower(ce_chi[i])){
            ce_chi[i]= (char)(((ce_chi[i] - 'a') + (otp[i] - 'A')) % 26 + 'a');
        }
    }
    return ce_chi;
}
string otp_decrypt(string ce_chi){
    string otp;
    ifstream input("ran_str.txt");
    input>>otp;

    for(int i = 0; i <= ce_chi.size(); i++){
        if(isupper(ce_chi[i])){
            ce_chi[i]= (char)(((ce_chi[i] - 'A') - (otp[i] - 'A')+26) % 26 + 'A');
        }
        else if(islower(ce_chi[i])){
            ce_chi[i]= (char)(((ce_chi[i] - 'a') - (otp[i] - 'A')+26) % 26 + 'a');
        }
    }
    otp.erase(0,ce_chi.size());
    ofstream output("ran_str.txt");
    output<<otp;
    return ce_chi;
}

string ce_decrypt(string msg){
    for(int i = 0; msg[i]; i++){
        if(isupper(msg[i])){
            msg[i] = (char)((((msg[i] - 'A')-3+26)%26)+'A');
        }
        else if(islower(msg[i])){
            msg[i] = (char)((((msg[i] - 'a')-3+26)%26)+'a');
        }
    }
    return msg;
}

main(){
//    string msg;
    string ce_chi, otp_chi, re_ce, re_plain;
//    ifstream input;
//    ofstream output;
//    input.open("in.txt");
//    output.open("out.txt");
//    getline(input, msg);
    cout<<"Enter The message;";
    gets(msg);

    cout<<endl<<"Plain Text: "<<msg<<endl<<endl;

    ce_chi = ce_encrypt(msg);
    cout<<"Ceaser Chipher: "<<ce_chi<<endl<<endl;
    otp_chi = otp_encrypt(ce_chi);
    cout<<"OTP Chipher: "<<otp_chi<<endl<<endl;

    re_ce = otp_decrypt(otp_chi);
    cout<<"Reverse OTP Chipher: "<<re_ce<<endl<<endl;
    re_plain = ce_decrypt(re_ce);
    cout<<"Reverse Ceaser Chipher: "<<re_plain<<endl<<endl;
}
