#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x,y,s;
    cin>>x>>y>>s;
    if((x+y)==s || (x+s)==y || (s+y)==x){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}