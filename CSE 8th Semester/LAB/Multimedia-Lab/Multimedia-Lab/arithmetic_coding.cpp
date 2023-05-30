#include<bits/stdc++.h>
using namespace std;

// symbol table
double a, probability[256];
char ch[256];


double arithmetic_coding(string str){

    int i,j,n,m;

    //cout<<str<<endl;

    double range = 1.0, point = 0, window = 0;

    // point is the high point value of a window
    for(i = 0; i < str.size(); i++){
        point = point - window;
        for(j = 0; ch[j]; j++){
            window = range*probability[j];
            point = point + window;
            //printf("%lf %lf\n",curr, probability[j]);
            if(str[i] == ch[j]){
                range = window;
                printf("%c %lf\n",str[i],point);
                break;
            }
        }
    }
    double tag = (point + (point - window))/2.0;

    cout<<"\nEncrypted data : ";
    cout<<tag<<endl;

    return tag;
}

string arithmetic_decoding(double tag){

    int i,j,k;

    double range = 1.0, point = 0, window = 0;
    string decd = "";

    // point is the high point value of a window
    for(i = 0; decd[decd.size()-1] != '$'; i++){
        point = point - window;
        for(j = 0; ch[j]; j++){
            window = range*probability[j];
            point = point + window;
            //printf("%lf %lf\n",curr, probability[j]);
            if((point - window)<tag && point > tag){
                range = window;
                //printf("%c %lf\n",ch[j],point);
                decd += ch[j];
                break;
            }
        }
    }

    cout<<"Decrypted data : ";
    cout<<decd<<endl;

    return decd;
}


int main(){

    int i,j,n,m,a,b;
    double enc;
    string decd, str;

    ifstream in;
    in.open("arithmetic_coding_in.txt");

    in>>n;
    for(i = 0; i < n; i++){
        in>>ch[i]>>probability[i];
        //cout<<ch[i]<<" "<<probability[i]<<endl;
    }

    while(!in.eof()){
        getline(in, str);
        if(str.size()>0) break;
        //cout<<str<<endl;
    }

    enc = arithmetic_coding(str);

    cout<<"Original string: "<<str<<endl;

    decd = arithmetic_decoding(enc);

    return 0;
}
