#include<bits/stdc++.h>
using namespace std;

void lzw_encoding(string str){

    int i,j,n,a,id = 0;

    map<string , int>mp;
    vector<int>enc;
    string tmp;

    ofstream enc_out;
    enc_out.open("lzw_enc.txt");

    cout<<"Initial String : "<<str<<endl;

    /// initial dictionary
    for(i = 0; i < str.size(); i++){
        tmp = "";
        tmp += str[i];
        if(!mp[tmp]){
            mp[tmp] = ++id;
            enc_out<<(int)str[i]<<" "<<mp[tmp]<<endl;
        }
    }

    enc_out<<-1<<" "<<-1<<endl;

    tmp = "";
    for(i = 0; i < str.size(); i++){
        tmp += str[i];
        if(mp[tmp]){
            a = mp[tmp];
        }
        else{
            cout<<a<<" "<<tmp<<endl;
            enc.push_back(a);
            mp[tmp] = ++id;
            tmp = "";
            tmp += str[i];
            a = mp[tmp];
        }
    }
    enc.push_back(a);

    enc_out<<enc.size()<<endl;
    cout<<"Encoding : ";
    for(i = 0; i < enc.size(); i++){

        if(i+1 ==  enc.size()){
            cout<<enc[i]<<endl;
            enc_out<<enc[i]<<endl;
        }
        else{
            cout<<enc[i]<<" ";
            enc_out<<enc[i]<<" ";
        }
    }
    //enc_out<<endl;
}

string lzw_deconding(){

    int i, j, in = 0, n, k ,m;
    map<int, string>mp;
    vector<int>code;
    string decd, tmp, str;
    char ch;

    ifstream enc_in;
    enc_in.open("lzw_enc.txt");

    for(i = 0; ; i++){
        enc_in>>k>>n;
        //cout<<k<<" "<<n<<endl;
        if(n==-1) break;
        tmp = "";
        tmp += (char)k;
        mp[n] = tmp;
        in++;
    }

    enc_in>>n;
    decd = "";
    for(i = 0; i < n; i++){
        enc_in>>m;
        //code.push_back(m);
        //cout<<m<<endl;
        decd += mp[m];

        if(i == 0){
            tmp = mp[m];
            continue;
        }

        tmp += mp[m][0];
        mp[++in] = tmp;

        tmp = mp[m];
    }

    cout<<"Decoded String : "<<decd<<endl;

    return decd;
}


int main(){
    int i,j,n;
    string str = "ababbab , ~ cababba";

    lzw_encoding(str);
    lzw_deconding();

    return 0;
}
