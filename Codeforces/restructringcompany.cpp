#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int>parent,rank;
        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);

            for(int i=0;i<=n;i++) parent[i]=i;
        }

        int find(int u){
            if(u == parent[u]) return u;
            return parent[u] = find(parent[u]);
        }

        void unionRank(int u,int v){
            int p1 = find(u),p2 = find(v);
            if(p1 == p2) return;
            if(rank[p1]>rank[p2]) parent[p2]=p1;
            else if(rank[p2]>rank[p1]) parent[p1]=p2;
            else{
                parent[p2]=p1;
                rank[p1]++;
            }

        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        long long n,q;
        cin>>n>>q;
        DisjointSet ds(n+1);
        while(q--){
            int type,x,y;
            cin>>type>>x>>y;

            if(type == 1){
                ds.unionRank(x,y);
            }
            else if(type == 2){
                for(int i=x;i<=y;i++){
                    ds.unionRank(x,i);
                }
            }
            else{
                if(ds.find(x) == ds.find(y)) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    return 0;
}