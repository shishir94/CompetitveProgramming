#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int>parent_m,rank_m,parent_d,rank_d;
        DisjointSet(int n){
            parent_m.resize(n+1);
            rank_m.resize(n+1);

            for(int i=0;i<=n;i++) parent_m[i]=i;

            parent_d.resize(n+1);
            rank_d.resize(n+1);

            for(int i=0;i<=n;i++) parent_d[i]=i;
        }

        int find_m(int u){
            if(u == parent_m[u]) return u;
            return parent_m[u] = find_m(parent_m[u]);
        }

        void unionByrank_m(int u,int v){
            int p1 = find_m(u), p2= find_m(v);
            if(p1 == p2) return;

            if(rank_m[p1]>rank_m[p2]){
                parent_m[p2] = p1;
                
            }
            else if(rank_m[p1]<rank_m[p2]){
                parent_m[p1] =p2;
            }
            else{
                parent_m[p2]=p1;
                rank_m[p1]++;
            }   
        }

        int find_d(int u){
            if(u == parent_d[u]) return u;
            return parent_d[u] = find_d(parent_d[u]);
        }

        void unionByrank_d(int u,int v){
            int p1 = find_d(u), p2= find_d(v);
            if(p1 == p2) return;

            if(rank_m[p1]>rank_m[p2]){
                parent_d[p2] = p1;
                
            }
            else if(rank_m[p1]<rank_m[p2]){
                parent_d[p1] =p2;
            }
            else{
                parent_d[p2]=p1;
                rank_d[p1]++;
            }   
        }
};
int main(){
    int n,m1,m2;
    cin>>n>>m1>>m2;

    DisjointSet dsu(n);
    for(int i=0;i<m1;i++){
        int u,v;
        cin>>u>>v;

        dsu.unionByrank_m(u,v);
    }
    
    for(int i=0;i<m2;i++){
        int u,v;
        cin>>u>>v;

        dsu.unionByrank_d(u,v);
    }

    int count = 0;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dsu.find_m(i) == dsu.find_m(j) || dsu.find_d(i) == dsu.find_d(j)) continue;

            count++;
            v.push_back({i,j});
            dsu.unionByrank_d(i,j);
            dsu.unionByrank_m(i,j);
        }
    }
    cout<<count<<endl;

    for(int i=0;i<count;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}