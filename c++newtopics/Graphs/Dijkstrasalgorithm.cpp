// Dijkstra's Algorithm Shortest Path ::  
/*
This algorithm is used to find the shortest path between the nodes.
first we will create adjacecny list.
Now lets take an example ::
0 --> [1,5] , [2,8]
1 --> [0,5] , [2,9] , [3,2]
2 --> [0,8] , [1,9] , [3,6]
3 --> [1,2] , [2,6]
*/

// Code ::

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Printing BFS ::
void bfs(vector<vector<pair<int,int>>>&g){
    int n = g.size();
    vector<bool>b(n,false);
    queue<int>q;
    b[0]=true;
    q.push(0);
    while(!q.empty()){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(auto j :g[x]){
            if(!b[j.first]){
                b[j.first]=true;
                q.push(j.first);
            }
        }
    }
}

// Printing DFS ::
void dfs(vector<vector<pair<int,int>>>& g){
    int n=g.size();
    vector<bool>b(n,false);
    stack<int>s;
    b[0]=true;
    s.push(0);
    while(!s.empty()){
        int x = s.top();
        cout<<x<<" ";
        s.pop();
        for(auto j:g[x]){
            if(!b[j.first]){
                b[j.first]=true;
                s.push(j.first);
            }
        }
    }
}


// Printing topological sort
void findtopo(vector<vector<pair<int,int>>> &g ,stack<int> &s, vector<int>&b,int i){
    b[i]=1;
    for(auto j:g[i]){
        if(b[j.first]!=1){
            findtopo(g,s,b,j.first);
        }
    }
    s.push(i);
}


// Only for directed acyclic graphs.
void toposort(vector<vector<pair<int,int>>>& g){
    int n = g.size();
    stack<int>s;
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        if(b[i]==0){
            findtopo(g,s,b,i);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

// FInding shortest path in weighted graphs ::
void shortestpath(vector<vector<pair<int,int>>>&g , int r){
    int n= g.size();
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >q;
    vector<int>d(n,INT_MAX);
    q.push(make_pair(0,r));
    d[r]=0;
    while(!q.empty()){
        int x = q.top().second;
        q.pop();
        for(auto j : g[x]){
            int v = j.first;
            int weight = j.second;
            if(d[v]>d[x]+weight){
                d[v]=d[x]+weight;
                q.push(make_pair(d[v],v));
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}  


void mst(vector<vector<pair<int,int>>> & g){
    int n=g.size();
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>q;
    vector<int>key(n,INT_MAX);
    vector<bool>mst(n,false);
    vector<int>parent(n,-1);
    int r = 0;
    q.push(make_pair(0,r));
    key[0]=0;
    while(!q.empty()){
        int x = q.top().second;
        q.pop();
        if(mst[x]==true){
            continue;
        }
        mst[x]=true;
        for(auto j : g[x]){
            int v = j.first;
            int weight = j.second;
            if(mst[v]==false && key[v]>weight){
                key[v]=weight;
                q.push(make_pair(key[v],v));
                parent[v]=x;
            }
        }
    }
    for(int i=1;i<n;i++){
        cout<<parent[i]<<" "<<i<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
char s;
cin>>s;
vector<vector<pair<int,int>>>adj(n);
for(int i=0;i<m;i++){
    int u,v,wt;
    cin>>u>>v>>wt;

    // cretaing directed weighted graphs.

    if(s=='d'){  
        adj[u].push_back(make_pair(v, wt));

    // cretaing undirected weighted graphs.

    }else{
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
}
int r;
cin>>r;
shortestpath(adj,r);

return 0;
}