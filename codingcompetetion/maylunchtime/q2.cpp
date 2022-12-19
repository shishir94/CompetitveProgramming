#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int d = y*z;
    int e = d+w;
    if(e == x){
        cout<<"filled"<<endl;
    }else if(e > x){
        cout<<"overflow"<<endl;
    }else{
        cout<<"unfilled"<<endl;
    }
}
return 0;
}