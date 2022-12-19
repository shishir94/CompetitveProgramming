#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string x , y;
cin>>x>>y;
int d = x.size();
int e = y.size();
if(d != e){
    cout<<"no"<<endl;
}else{
    bool t = false;
    for(int i = 0;i<d;i++){
        for(int j = 0;j<e;j++){
            if(x[i] != y[j]){
                t = false;
            }else{
                t = true;
                break;
            }
        }
        if(t == false){
            break;
        }
    }
    if(t != true){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
}
return 0;
}