// Cycle Detection in Undirected Graphs using DFS(Depth First Search) and BFS(Breadth First Search).

// Approach
/*
We will have adjacency list of graph. We will create a visited array and we will create a function which detects whther there
is a cycle or not. This function takes the parameter node,parent,visited array and adjacency list.if the visited node is not
a parent this means that there is a cycle.
*/
// Example ::
/*
Adjacency list :: 0 ---> 1 2 3
                  1 ---> 0 2
                  2 ---> 0 1
                  3 ---> 0 4
                  4 ---> 3

Dry run for this example ::
First we call the function named iscycle(0,-1,vis[],adj[]) vis[0]=1 ---> iscycle(1,0) vis[1]=true ---> return false
iscycle
(2,1) vis[2]=1 vis[0]=1 ---> return true, as 0 is not a parent or in other words 0 is not equal to 1.
*/

// Approach in simple words ::


/*
itereate over all the nodes of the graph and keep a visited array visited[] to keep track of the visited nodes.
Run a DFS on the given subgraph connected to the current node and pass the parent of the current node. in each
recursive :
1) set visited[root]=1
2) iterate over all the adjacent nodes of the current node in the adjacency list.
    1)    if it is not visited then run DFS on that node and return true if it returns true.
    2)    Else if the adjacent node is visited and not the parent of the current node then return true.
3) return false.

*/


// Code
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Using DFS ::
bool checkForcycleDFS(int node,int parent,vector<int>vis,vector<vector<int>>g){
    vis[node]=1;
    for(auto it:g[node]){
        if(vis[it]==0){
            if(checkForcycleDFS(it,node,vis,g)){
                return true;
            }
        }else if(it != parent){
            return true;
        }
    }
    return false;
}


 // Using BFS
bool checkForcycleBFS(int s,int V,vector<int>vis,vector<vector<int>>g){
    queue<pair<int,int>>q;
    vis[s]=1;
    q.push({s,-1});
    while(!q.empty()){
        int node = q.front().first;
        int par = q.front().second;
        q.pop();
        for(auto it:g[node]){
            if(vis[it]!=1){
                vis[it]=1;
                q.push({it,node});
            }else if(par!=it){
                return true;
            }
        }
    }
    return false;
}


bool iscycle(int n,vector<vector<int>>g){
    vector<int>vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(vis[i]!=1){
            if(checkForcycleDFS(i,-1,vis,g)){
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
vector<vector<int>>g(n+1); // adjacenecy list.
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
cout<<iscycle(n,g)<<endl;
return 0;
}