#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    public:
        vector<int> parent, rank,size;
        int components;
        DisjointSet(int n) {
            parent.resize(n+1);
            rank.resize(n+1, 0);
            size.resize(n+1,1);
            components = n;
            for (int i = 0; i < n; i++) {
                parent[i] = i;
            }
        }
    
        int find(int node) {
            if (node == parent[node]) return node;
            return parent[node] = find(parent[node]);
        }
    
        void unionbyRank(int u, int v) {
            int p1 = find(u), p2 = find(v);
            if (p1 == p2) return;
            
            components--;
            if (rank[p1] > rank[p2]) {
                parent[p2] = p1;
                size[p1]+= size[p2];
            } else if (rank[p2] > rank[p1]) {
                parent[p1] = p2;
                size[p2] += size[p1];
            } else {
                parent[p2] = p1;
                rank[p1]++;
                size[p1] += size[p2];
            }
        }
        int count(){
            return components;
        }
    };
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m1,m2;
        cin>>n>>m1>>m2;

        DisjointSet ds1(n),ds2(n);
        vector<pair<int,int>>v1;
        for(int i=0;i<m1;i++){
            int u,v;
            cin>>u>>v;
            v1.push_back({u,v});
        }

        for(int i=0;i<m2;i++){
            int u,v;
            cin>>u>>v;
            ds2.unionbyRank(u,v);
        }

        int ans = 0;
        for(int i=0;i<m1;i++){
            int u = v1[i].first,v = v1[i].second;
            if(ds2.find(u) == ds2.find(v)){
                ds1.unionbyRank(u,v);
            }
            else{
                ans++;
            }
        }

        ans += ds1.count()-ds2.count();
        cout<<ans<<endl;
    }
    return 0;
}