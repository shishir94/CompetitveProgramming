// A tree can have at modt 2 MHT's (minimum height tree).
// Middle nodes are the roots for minimum height trees.
// Use BFS approach.
// make adjacency list
// store degree of each and evey nodes in an array
// push all such nodes in a queue whose degree is 1.
// pop out from the queue and decrease degree of each node connected to it by 1 and push that node in a vector.
// if degree of any node becomes 1 push that node in a queue.

// Implementation ::
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if(n==0){
        return {};
    }
    if(n==1){
        return {0};
    }
    vector<int>deg(n,0);
    vector<vector<int>>g(n);
    for(int i=0;i<edges.size();i++){
        g[edges[i][0]].push_back(edges[i][1]);
        g[edges[i][1]].push_back(edges[i][0]);
        deg[edges[i][0]]++;
        deg[edges[i][1]]++;
    }
    queue<int>q;
    for(int i=0;i<n;i++){
        if(deg[i]==1){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        ans.clear();
        int s = q.size();
        for(int i=0;i<s;i++){
            int temp = q.front();q.pop();
            ans.push_back(temp);
            for(auto j:g[temp]){
                deg[j]--;
                if(deg[j]==1){
                    q.push(j);
                }
            }
        }
    }
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<int>>edges;
    for(int i=0;i<n-1;i++){
        vector<int>v;
        for(int j=0;j<2;j++){
            int c;
            cin>>c;
            v.push_back(c);
        }
        edges.push_back(v);
        v.clear();
    }
    vector<int>res = findMinHeightTrees(n,edges);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}