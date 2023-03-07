// Topological Sort ::
/*
Agar u v is connected h to u phele aayega y se soritng karte samay.
Ye sirf directed acyclic graph ke lia hi hota h.
Acyclic means no cycle.
Undirected nhi kyuki ussme agar u coonected v se to v bhi connected hoga u se.
Cyclic nhi kyuki koi ek vertices satisfy nhi ho payegi
Method h :: DFS (Depth First Search).
*/

// Code
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void findtoposort(int node,vector<int> &vis,stack<int> &s,vector<vector<int>> adj){
    vis[node]=1;
    for(auto j:adj[node]){
        if(vis[j]==0){
            findtoposort(j,vis,s,adj);
        }
    }
    s.push(node);
}


void toposort(int n,vector<vector<int>>adj){
    cout<<"1"<<endl;
    stack<int>s;
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            findtoposort(i,vis,s,adj);
        }
    }
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
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
toposort(n,g);
return 0;
}