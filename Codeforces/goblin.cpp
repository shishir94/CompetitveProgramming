#include <bits/stdc++.h>
using namespace std;


int ans;
class DisjointSet {
public:
    vector<int> parent, rank,size;

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n,1);
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

        if (rank[p1] > rank[p2]) {
            parent[p2] = p1;
            size[p1]+= size[p2];
            ans = max(ans,size[p1]);
        } else if (rank[p2] > rank[p1]) {
            parent[p1] = p2;
            size[p2] += size[p1];
            ans = max(ans,size[p2]);
        } else {
            parent[p2] = p1;
            rank[p1]++;
            size[p1] += size[p2];
            ans= max(ans,size[p1]);
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n == 1 && s == "0"){
            cout<<0<<endl;

        }
        else{
            set<int>st;
            ans = 1;
            vector<set<int>>v(n);

            for(int i=0;i<n;i++){
                if(s[i] =='0') st.insert(i);
            }

            for(int i=0;i<n;i++){
                if(s[i] == '0'){
                    st.erase(i);
                    v[i] =st;
                    st.insert(i);
                }
                else{
                    st.insert(i);
                    v[i] = st;
                    st.erase(i);
                }
            }
            DisjointSet dsu(n*n);
            int dx[4] = {-1,0,0,1};
            int dy[4] = {0,-1,1,0};
            for(int i=0;i<n;i++){
                for(auto itr=v[i].begin();itr!=v[i].end();itr++){
                    int x = i;
                    int y = *itr;
                    int val = n*x+y;
                    for(int j=0;j<4;j++){
                        int nx = x+dx[j],ny = y+dy[j];
                        int val1 = nx*n+ny;
                        if(nx >=0 && ny >= 0 && nx<n && ny <n && v[nx].find(ny) != v[nx].end()){
                            dsu.unionbyRank(val,val1);
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
        
    }
    return 0;
}
