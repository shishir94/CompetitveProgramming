#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n = s.size();
    char r = s[0];
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    bool p = false;
    char e;
    for(int i=1;i<n;i++){
        if(s[i]!=r){
            e = s[i];
            p=true;
            break;
        }
    }
    if(!p){
        cout<<"NO"<<endl;
    }else{
        if(mp[e]>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}