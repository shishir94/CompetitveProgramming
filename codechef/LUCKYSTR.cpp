#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string x;
    string z;
    string v;
    int y;
    for(int i =0;i<a;i++){
        cin>>x;
        y =x.size();
    }
    for(int i =0;i<b;i++){
        cin>>z;
        int s = z.size();
        if(s>=47){
            cout<<"Good"<<endl;
        }else{
            for(int i =0;i<y;i++){
                for(int j = 0;j<y;i++){
                    v = z.substr(i,y);
                    if(v[i] == x[j]){
                        cout<<"Good"<<endl;
                    }
                }
            }
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}