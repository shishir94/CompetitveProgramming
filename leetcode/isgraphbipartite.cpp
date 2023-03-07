/* 

A Bipartite Graph is a graph whose vertices can be divided into two independent sets, U and V such that every edge 
(u, v) either connects a vertex from U to V or a vertex from V to U. In other words, for every edge (u, v), either u 
\belongs to U and v to V, or u belongs to V and v to U. We can also say that there is no edge that connects vertices of 
same set.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isbiparitite(vector<vector<int>>&graph){
    int n=graph.size();
    vector<int>v(n,-1);
    queue<int>q;
    q.push(0);
    v[0]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto it:graph[x]){
            if(v[it]==-1){
                v[it]=1-v[x];
                q.push(it);
            }
            if(v[it]!=-1 && v[it]==v[x]){
                return false;
            }
        }
    }
    return true;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>g(n);
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
cout<<isbiparitite(g)<<endl;
return 0;
}