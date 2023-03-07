#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Printing BFS of a graph
void bfs(int x,vector<vector<int>>g){
    queue<int>q;
    int n=g.size();
    vector<bool>b(n,false);
    b[x]=true;
    q.push(x);
    while(!q.empty()){
        int y = q.front();
        cout<<y<<" ";
        q.pop();
        for(auto d:g[y]){
            if(b[d]==false){
                b[d]=true;
                q.push(d);

            }
        }
    }
}


// Printing DFS of a graph.
void dfs(int x,vector<vector<int>>g){
    int n=g.size();
    stack<int>s;
    vector<bool>b(n,false);
    b[x]=true;
    s.push(x);
    while(!s.empty()){
        int y = s.top();
        cout<<y<<" ";
        s.pop();
        for(auto j : g[y])
        {
            if(b[j]==false){
                b[j]=true;
                s.push(j);
            }
        }
    }
}


// Printing a shortest path in between two given nodes using BFS. 
int shortestpath(vector<vector<int>>g,int x,int y){
    int n= g.size();
    vector<bool>b(n,false);
    queue<pair<int,int>>q;
    b[x]=true;
    q.push(make_pair(x,0));
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        if(x.first==y){
            return x.second;
        }
        for(auto j:g[x.first]){
            if(b[j]==false){
                b[j]=true;
                q.push(make_pair(j,x.second+1));
            }
        }
    }
}


// Check whether there is a cycle in undirected graph or not.
bool iscycleDFS(vector<vector<int>>g,int node,int parent,vector<int>b){
    b[node]=1;
    for(auto j:g[node]){
        if(b[j]==0){
            if(iscycleDFS(g,j,node,b)){
                return true;
            }
        }else if(j!=parent){
            return true;
        }
    }
    return false;
}


bool iscycleundirected(vector<vector<int>>g){
    int n=g.size();
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        if(b[i]==0){
            if(iscycleDFS(g,i,-1,b)){
                return true;
            }
        }
    }
    return false;
}


// Checking whether there is a cycle in directed graph or not.
bool iscycledirectedDFS(int node,vector<vector<int>>g,vector<int>b,vector<int>dfs){
    int n=g.size();
    b[node]=1;
    dfs[node]=1;
    for(auto j:g[node]){
        if(b[j]==0){
            if(iscycledirectedDFS(j,g,b,dfs)){
                return true;
            }
        }else if(dfs[j]==1){
            return true;
        }
    }
    dfs[node]=0;
    return false;
}


bool iscycledirected(vector<vector<int>>g){
    int n=g.size();
    vector<int>b(n,0);
    vector<int>dfs(n,0);
    for(int i=0;i<n;i++){
        if(b[i]==0){
            if(iscycledirectedDFS(i,g,b,dfs)){
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
char s;
cin>>s;
vector<vector<int>>g(n);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    // making of directed graphs.

    if(s=='D'){ 
        g[a].push_back(b);

    // making of undirected graphs.
    }else{  
        g[a].push_back(b);
        g[b].push_back(a);
    }
}
int x;
cin>>x;
int r ,u;
cin>>r>>u;

return 0;
}