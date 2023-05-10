#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>&g ,int u , int v){
    int n = g.size();
    vector<int>vis(n,0);
    vis[u]=1;
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x==v){
            return 1;
        }
        for(auto j :g[x]){
            if(!vis[j]){
                vis[j]=1;
                q.push(j);
            }
        }
    }
    return 0;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int dp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j){
                dp[i][j]=dp[j][i]=0;
            }else if(dp[i][j]==-1){
                dp[i][j]= bfs(g,i,j);
            }else{
                continue;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int u,v;
        cin>>u>>v;
        if(dp[u][v]){
            cout<<"YO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}