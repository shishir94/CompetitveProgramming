#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    bool t = false;
    for(int i = 1;i*i<x;i++){
        if((x-2*i)%(i+2) == 0 && (x != 2*i)){
            t = true;
            break;
        }else{
            t = false;
        }
    }
    if(t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}