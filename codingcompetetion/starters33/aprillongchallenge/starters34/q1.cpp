#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c-a >= 0 && d-b>=0){
        cout<<"POSSIBLE"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
return 0;
}