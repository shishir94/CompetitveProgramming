#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int>parent,rank;
        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);

            for(int i=0;i<=n;i++) parent[i]=i;
        }

        int find(int node){
            if(node == parent[node]) return node;
            return parent[node] = find(parent[node]);
        }

        void unionByRank(int u,int v){
            int p1 = find(u), p2 = find(v);
            if(p1 == p2) return;

            if(rank[p1]>rank[p2]){
                parent[p2] = p1;

            }

            else if(rank[p1]<rank[p2]){
                parent[p1]= p2;
            }
            else{
                parent[p2] = p1;
                rank[p1]++;
            }
        }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    DisjointSet Dsu(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;

        Dsu.unionByRank(x,y);
    }

    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[Dsu.find(i)]++;
    }

    cout<<mp.size()-1<<endl;
    vector<int>pat;
    for(auto it=mp.begin();it!=mp.end();it++) pat.push_back(it->first);

    for(int i=1;i<pat.size();i++){
        cout<<pat[i-1]<<" "<<pat[i]<<endl;
    }
return 0;
}