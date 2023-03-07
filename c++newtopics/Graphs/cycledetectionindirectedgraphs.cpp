// Cycle detection in directed graph using DFS.
// Approach :: 
/*
Algorithm for detecting cycle in undirected graph will not work here we have to modify that algorithm. We have to create two
array one is visited and another one is DFS visited.
Recurisevly call a function detect a cycle and mark vis[node]=1 and dfsvis[node]=1 then again call a fuction for its adjacent
nodes which are not visited and if it return true after sometime return true else if dfsvis[node]=1 return true.
After all this mark dfsvis[node]=0;
After all calling if it return false then finally returns false.
*/

// Code 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool cycleForcheckDfs(int node,vector<vector<int>>g,int vis[],int dfsvis[]){
    vis[node]=1;
    dfsvis[node]=1;
    for(auto it :g[node]){
        if(!vis[it]){
            if(cycleForcheckDfs(it,g,vis,dfsvis)){
                return true;
            }
        }else if(dfsvis[it]){
            return true;
        }
    }
    dfsvis[node]=0;
    return false;
}


bool iscycle(int n , vector<vector<int>>g){
    int vis[n];
    int dfsvis[n];
    memset(vis,0, sizeof vis);
    memset(dfsvis,0,sizeof dfsvis);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(cycleForcheckDfs(i,g,vis,dfsvis)){
                return true;
            }
        }
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>g(n);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
}
cout<<iscycle(n,g)<<endl;
return 0;
}