#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfsXor(vector<pair<int,int>> adj[],int src,vector<int>&prefXor,int par){
    for(auto it: adj[src]){
        int nd = it.first;
        int wt=it.second;
        if(nd!=par){
            prefXor[nd]=(prefXor[src]^wt);
            dfsXor(adj,nd,prefXor,src);
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int>prefXor(n+1);
    prefXor[1]=0;
    dfsXor(adj,1,prefXor,0);
    bool flag =0;
    map<int,pair<int,int>>mp;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int x = prefXor[i]^prefXor[j];
            if(mp.find(x)!=mp.end()){
                if(i==mp[x].first&&j==mp[x].second){
                    break;
                }
                cout<<mp[x].first<<" "<<mp[x].second<<" "<<i<<" "<<j<<endl;
                flag=1;
                break;
            }else{
                mp[x]={i,j};
            }
        }
        if(flag){
            break;
        }
    }
    if(flag!=1){
        cout<<"-1"<<endl;
    }
}   
return 0;
}