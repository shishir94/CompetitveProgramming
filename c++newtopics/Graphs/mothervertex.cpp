// Mother Vertex
/*
Vo vertex jis vertex se hum sari other vertex ko reach kar sakte h.

Algorithm ::
Hum DFS lagayenge graph me koi bhi vertex se or backtrack karte hue stack me number ko daal denge essa karne par jo topmost
element hoga vahi hamara mother vertex hoga.

Reason :: Mann lete h ki topmost element mother vertex nhi h koi other element mother vertex h . 
Case 1:: Agar topmost element se mother vertex ke lia path possible h to topmost element bhi mother vertex hoga.
Case 2 :: Agar koi path nhi h to essa ho hi nhi sakta ki topmost element mother vertex se upar aa jae.

*/

// Code 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &g,int n,int node,vector<int>&b){
    b[node]=1;
    for(auto i:g[node]){
        if(!b[i]){
            dfs(g,n,i,b);
        }
    }
}


int mother(int n,vector<vector<int>>&g){
    vector<int>vis(n,0);
    int last_node=0;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            last_node=i;
            dfs(g,n,i,vis);

        }
    }
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
    dfs(g,n,last_node,vis);
    for(int i=0;i<vis.size();i++){
        if(vis[i]==0){
            return -1;
        }
    }   
    return last_node;
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
cout<<mother(n,g)<<endl;
return 0;
}