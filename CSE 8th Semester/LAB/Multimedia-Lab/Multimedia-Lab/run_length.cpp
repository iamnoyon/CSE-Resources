
#include<bits/stdc++.h>
using namespace std;

char str[1000000];
string en = "", decr = "";

string to_string(int cn){
    string tmp = "";
    while(cn){
        tmp += (char)(cn%10 + 48);
        cn /= 10;
    }
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

int main(){

    int cn = 0, i, j;

    ifstream run_in;
    ofstream run_out,re_dec;

    run_in.open("run_in.txt");
    run_out.open("run_out.txt");
    re_dec.open("re_dec.txt");

    run_in>>str;

    for(i = 0; str[i]; i++){
        cn = 0;
        for(j = i; str[j] && str[i]==str[j]; j++){
            cn++;
        }
        i = j - 1;
        en += str[i];
        //cout<<to_string(cn)<<endl;
        en += to_string(cn);
    }

    run_out<<"Encrypted text : "<<en<<endl;

    // decryption section

    for(i = 0; en[i]; i++){
        if(!isdigit(en[i])){

            int cnt = 0;
            for(j = i+1; en[j] && isdigit(en[j]); j++){
                cnt = cnt*10 + (int)(en[j] - '0');
            }
            for(j = 0; j < cnt; j++){
                decr += en[i];
            }
        }
    }

    re_dec<<"After decryption : "<<decr<<endl;

    run_in.close();
    run_out.close();
    re_dec.close();

    return 0;
}

