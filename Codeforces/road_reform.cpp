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
        void unionByrank(int u,int v){
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
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        DisjointSet dsu(n);
        vector<pair<long long,pair<long long,long long>>>e(m);
        for(int i=0;i<m;i++){
            cin>>e[i].second.first>>e[i].second.second>>e[i].first;
            e[i].second.first--;
            e[i].second.second--;
        }

        sort(e.begin(),e.end());
        long long mx = 0;
        vector<long long>wt;
        for(auto it:e){
            if(dsu.find(it.second.first) == dsu.find(it.second.second)) continue;

            dsu.unionByrank(it.second.first,it.second.second);
            wt.push_back(it.first);
        }

        mx = *max_element(wt.begin(),wt.end());
        if(mx >= k){
            long long sum = 0;
            for(int i=0;i<wt.size();i++){
                sum += max(wt[i]-k,0ll);
            }
            cout<<sum<<endl;
        }
        else{
            long long sum = 1e9;
            for(int i=0;i<e.size();i++){
                sum = min(sum,abs(k-e[i].first));
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}