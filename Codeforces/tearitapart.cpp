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
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int ans =INT_MAX;
    for(int i=0;i<26;i++){
        char c = ('a'+i);
        int len = 0;
        int cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==c){
                len = max(len,cnt);
                cnt=0;
            }else{
                cnt++;
            }
        }
        len = max(len,cnt);
        ans = min(ans,len);
    }
    // cout<<ans<<endl;
    int ct =0;
    while(ans > 0){
        ans = ans/2;
        ct++;
    }
    cout<<ct<<endl;
}
return 0;
}