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
    vector<int>h;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[i]=1;
    }
    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x-1].push_back(y-1);
        g[y-1].push_back(x-1);
    }
    vector<int>a;
    for(int i=0;i<n;i++){
        if(g[i].size()==1){
            a.push_back(g[i][0]);
            mp[i]=0;
            mp[g[i][0]]=0;
        }   
    }
    sort(a.begin(),a.end());
    int cnt =1;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[0]){
            cnt++;
        }else{
            break;
        }
    }
    int u = -1;
    for(auto itr = mp.begin();itr !=mp.end();itr++){
        if(itr->second !=0){
            u=itr->first;
            break;
        }
    }
    int ans = g[u].size();
    cout<<ans<<" "<<cnt<<endl;

}
return 0;
}