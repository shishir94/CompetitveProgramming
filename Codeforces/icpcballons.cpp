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
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    long long ans = 0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        ans += 2+(itr->second-1);
    }
    cout<<ans<<endl;
}
return 0;
}