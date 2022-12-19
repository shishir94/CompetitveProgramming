#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    char y;
    cin>>y;
    int b = 0;
    for(int i = 0;i<x.size();i++){
        if(x[i] == y){
            b = i;
            break;
        }
    }
    string p = "";
    for(int i=b;i>=0;i--){
        p += x[i];
    }
    for(int i = b+1;i<x.size();i++){
        p+=x[i];
    }
    cout<<p<<endl;
}
return 0;
}