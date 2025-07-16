#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int ans = 1;
class DisjointSet{
    public:
        vector<int>parent,rank,size;
        int components;
        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);
            size.resize(n+1,1);

            for(int i=0;i<=n;i++) parent[i]=i;
            components = n;
        }

        int find(int node){
            if(node == parent[node]) return node;
            return parent[node] = find(parent[node]);
        }

        void unionByRank(int u,int v){
            int p1 = find(u), p2 = find(v);
            if(p1 == p2) return;

            components--;
            if(rank[p1]>rank[p2]){
                parent[p2] = p1;
                size[p1] += size[p2];
                
                ans = max(ans,size[p1]);
            }

            else if(rank[p1]<rank[p2]){
                parent[p1]= p2;
                size[p2] += size[p1];
                ans = max(ans,size[p2]);
            }


            else{
                parent[p2] = p1;
                size[p1] +=size[p2];
                rank[p1]++;
                ans = max(ans,size[p1]);
            }
        }

        int get_comp(){
            return components;
        }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    DisjointSet dsu(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        dsu.unionByRank(u,v);
        cout<<dsu.get_comp()<<" "<<ans<<endl;
    }
return 0;
}