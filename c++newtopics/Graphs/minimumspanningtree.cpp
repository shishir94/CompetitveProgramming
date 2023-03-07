// Minimum Spanning tree ::
/*
Spanning Tree :: When you convert a graph into tree such that it contains n nodes and n-1 edges . Every node is reachable by 
every other node. This type of graph is known as spanning tree.

M in MST (minimum cost of weights).

Now Prim's Algorithm ::
For this we need three data structure.
1) hame 3 array banani padegi pheli key , dusri mst track karne ke lia or tisri parent.

This is a 3 step algorithm ::
sbase phele jaha se suru karna h usku source mann lo or uski key ko 0 kar do;
key[source]=0;
uske baad key wali array me janna h or ussme jo value minimum hogi usko nikal kar lana h ---> iske lia hum min heap use 
karenge priority_queue ka use karenge.
uske baad usse mst[minimum jo nikal kar aaya] = true karna h.
uske baad saree adj nikal lo.

*/

// Code ::
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
vector<vector<pair<int,int>>>g(n);
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back(make_pair(v,w));
    g[v].push_back(make_pair(u,w));
}
mst(g);
return 0;
}


// Another method is kruskal's method
/*
Issme hum vo edge lete h jiska sabse kam weight hota h or essi edge ko discard kar dete jisko lene par cycle create ho 
rahi ho.
*/