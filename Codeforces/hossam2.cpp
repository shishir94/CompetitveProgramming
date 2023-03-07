#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[i]=(n-(i-1));
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mp[x]=(y-x);
    }
    long long ans =0;   
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        ans += (itr->second);
    }
    cout<<ans<<endl;
}
return 0;
}