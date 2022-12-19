#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int d = y/x;
    int e = z - d;
    if(e<0){
        cout<<"0"<<endl;
    }else{
    cout<<e<<endl;
    }
}
return 0;
}