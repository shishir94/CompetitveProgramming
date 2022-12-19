#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string b ;
    while(true){
        cin>>b;
        if(b == "-1"){
            break;
        }
        if(b=="0"){
            cout<<"0"<<endl;
        }else if(b == "1"){
            cout<<"0"<<endl;
        }else{
            int n = b.size();
            int i = n-1;
            while(b[i] == '0'){
                b[i] = '9';
                i--;
            }
            int x = b[i]-'0';
            b[i] = '0' + x-1;
            if(b[0] == '0'){
                b = b.substr(1);
            }
            cout<<b<<endl;
        }
    }
    return 0;
}