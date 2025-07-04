#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int>parent,rank;
        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1);

            for(int i=0;i<=n;i++) parent[i]=i;
        }

        int find(int u){
            if(u == parent[u]) return u;
            return parent[u] = find(parent[u]);
        }

        void unionByRank(int u,int v){
            int p1 = find(u), p2= find(v);
            if(p1 == p2) return;

            if(rank[p1]>rank[p2]){
                parent[p2] = p1;
                
            }
            else if(rank[p1]<rank[p2]){
                parent[p1] =p2;
            }
            else{
                parent[p2]=p1;
                rank[p1]++;
            }   
        }
};
int main(){
    int n;
    cin>>n;

    vector<vector<int>>removed;

    DisjointSet dsu(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;

        int p1 = dsu.find(u);
        int p2 = dsu.find(v);

        if(p1 == p2){
            removed.push_back({u,v});
        }
        else{
            dsu.unionByRank(u,v);
        }
    }

    set<int> components;
    for (int i = 1; i <= n; i++) {
        components.insert(dsu.find(i));
    }

    vector<int> unique_parent(components.begin(), components.end());

    int j = 0;
    // if(removed.size() == 0) cout<<0<<endl;
    cout<<removed.size()<<endl;
    if(removed.size() != 0){
        for(int i=1;i<unique_parent.size();i++){
            cout<<removed[j][0]<<" "<<removed[j][1]<<" "<<unique_parent[i-1]<<" "<<unique_parent[i]<<endl;
            j++;
        }
    }
    
    return 0;
}