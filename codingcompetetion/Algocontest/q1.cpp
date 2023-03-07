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
    int n=s.size();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(mp['e']>0&&mp['a']>0&&mp['s']>0&&mp['y']>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}