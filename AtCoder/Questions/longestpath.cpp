#include <bits/stdc++.h>
using namespace std;

vector<int>dp;
vector<bool>vis;

void dfs(int node,vector<vector<int>>& g){
    vis[node]= true;
    for(auto it:g[node]){
        if(!vis[it]) dfs(it,g);

        dp[node] = max(dp[node], 1+ dp[it]);
    }
}
int main() {
    int n,m;
    cin>>n>>m;

    dp.resize(n+1,0);
    vis.resize(n+1,false);

    vector<vector<int>>g(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
    }

    int ans = 0;
    for(int i=1;i<=n;i++){
        if(vis[i] == false) dfs(i,g);
    }
    for(int i=1;i<=n;i++) ans = max(ans,dp[i]);
    cout<<ans<<endl;
    return 0;
}
