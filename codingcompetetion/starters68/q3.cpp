#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string,int>mp;
    int i=0;
    while(i<s.size()){
        int cnt = 1;
        string v = "";
        v = s[i];
        while(i+1<s.size() && s[i]==s[i+1]&&i<s.size()){
            cnt++;
            v = v+s[i];
            i++;
        }
        if(mp.find(v)!=mp.end()){
            mp[v]=cnt;
        }else{
            mp[v]=cnt-1;
        }
        i++;
    }
    int ans = 0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        ans = max(ans,itr->second);
    }
    cout<<ans<<endl;
}
return 0;
}