#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int>parent,rank;
        // int comp;

        DisjointSet(int n){
            parent.resize(n+1),
            rank.resize(n+1);
            // comp = n;

            for(int i=0;i<=n;i++) parent[i] = i;
        }

        int find(int node){
            if(node == parent[node]) return node;
            return parent[node] = find(parent[node]);
        }

        bool unionByRank(int u,int v){
            int p1 = find(u),p2 = find(v);
            if(p1 == p2) return false;

            // comp--;
            if(rank[p1]>rank[p2]){
                parent[p2]= p1;
            }
            else if(rank[p2]>rank[p1]){
                parent[p1] = p2;
            }
            else{
                parent[p2] = p1;
                rank[p1]++;
            }

            return true;
        }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<int>>v(m,vector<int>(3,0));
    for(int i=0;i<m;i++) cin>>v[i][1]>>v[i][2]>>v[i][0];

    sort(v.begin(),v.end());
    long long ans = 0;
    DisjointSet dsu(n);
    int comp = n;
    for(int i=0;i<m;i++){
        if(dsu.unionByRank(v[i][1],v[i][2])){
            ans += v[i][0];
            comp--;
        }
    }

    if(comp == 1) cout<<ans<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
return 0;
}