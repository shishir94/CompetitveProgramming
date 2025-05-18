/*
Binary lifting is a dynamic programming ways to find 2^jth ancestors of every node.

To find the 2^jth ancestor of any node we can take 2 jumps of 2^(j-1) to reach 2^jth ancestors of any node --> Main idea behind Binary Lifting.
It may be used to find the LCA of two nodes , very helpful to answer the queries.

Time complexity ---> O(nlogn).
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>parent;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        parent.push_back(i);
    }

    // Binary Lifting --> precompute.
    int col = log2(n)+1;
    vector<vector<int>>ancestors(n+1,vector<int>(col,-1));  // stores the ancestors

    for(int i=0;i<n;i++) ancestors[i][0] = parent[i];
    for(int j=1;j<col;j++){
        for(int i=0;i<n;i++){
            int pre = ancestors[i][j-1];
            if(pre != -1) ancestors[i][j] = ancestors[ancestors[i][j-1]][j-1];
        }
    }

    // Now code to find the kth ancestor using ancestors array.
    int node, k;
    cin>>node>>k;

    // we will iterate over the binary representation of k and if bit is 1 we move to that ancestor of node and carry on the same process.
    for(int i=31;i>=0;i--){
        if((k & (1<<i))){
            node = ancestors[node][i];
            if(node == -1) break;
        }
    }
    cout<<node<<endl;

    // now how to find LCA of two node using Binary Lifting.
    // LCA --> common parent of both the nodes that is farthest from root node.
    /* 
        One main point is that to find the LCA we have to store the level of every node.
        Steps to find the LCA :-
        1- Check if the one node is the ancestor of another if it occurs than that node is the LCA
        2- Otherwise we will find the highest ancestor of both node which is not equal and finally we will return the first ancestor of that highest node.

    */
    vector<int>level_of_node(n,0);  // vector to store the level of every node

    int u,v;
    cin>>u>>v;  // nodes for the which we have to find the LCA

    if(level_of_node[u] < level_of_node[v]) swap(u,v);  // we will consider farthest node from root node to be u

    // we will check if v is the ancestor of node u, if this is correct then we simply return v
    // for this we will find the ancestor of node u which is at the same level of v.

    for(int i=col;i>=0;i--){
        if(level_of_node[u]-pow(2,i) >= level_of_node[v]){
            u = ancestors[u][i];
        }
    }
    if(u == v) cout<<u<<endl;
    else{
        for(int i=col;i>=0;i--){
            if(ancestors[u][i] != ancestors[v][i]){
                u = ancestors[u][i];
                v = ancestors[v][i];
            }
        }
        cout<<ancestors[u][0]<<endl;
    }
    return 0;
}