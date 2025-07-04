#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// tle code --> need optimization
class DisjointSet {
public:
    vector<int> parent, rank;
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int a) {
        if(parent[a] == a) return a;
        return parent[a] = find(parent[a]); // Path compression
    }

    void unionSets(int a, int b) {
        int rootA = find(a);
        int rootB = find(b);
        if (rootA != rootB) {
            if (rank[rootA] < rank[rootB]) {
                parent[rootA] = rootB;
            } else if (rank[rootA] > rank[rootB]) {
                parent[rootB] = rootA;
            } else {
                parent[rootB] = rootA;
                rank[rootA]++;
            }
        }
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        DisjointSet ds(n);
        vector<vector<int>>v(n+1,vector<int>(11,0));
        while(m--){
            int a,d,k;
            cin>>a>>d>>k;
            v[a][d] = max(v[a][d],k);
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=10;j++){
                int cnt = v[i][j] , pos =i;

                while(cnt >0 && pos+j <= n){
                    cnt--;
                    ds.unionSets(pos,pos+j);
                    v[pos][j] = 0;
                    pos += j;
                    cnt = max(cnt,v[pos][j]);
                }
            }
        }
        int ans = 0;
        unordered_set<int> uniqueRoots;
        for(int i=1; i<=n; i++) {
            uniqueRoots.insert(ds.find(i));
        }
        ans = uniqueRoots.size();
        cout << ans << endl;
    }
    return 0;
}