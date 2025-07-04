#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank;
    int components;

    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1);
        components = n;
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find(int u) {
        if (u == parent[u]) return u;
        return parent[u] = find(parent[u]);
    }

    bool unite(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (rank[pu] < rank[pv]) swap(pu, pv);
        parent[pv] = pu;
        if (rank[pu] == rank[pv]) rank[pu]++;
        components--;
        return true;
    }

    bool connected() {
        return components == 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout<<endl;
        int n, m;
        cin >> n >> m;

        vector<tuple<int, int, int>> edges(m);
        int maxMask = 0;
        for (int i = 0; i < m; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            edges[i] = {u, v, w};
            maxMask |= w;
        }

        for (int bit = 31; bit >= 0; --bit) {
            if ((maxMask & (1 << bit)) == 0) continue;

            DisjointSet dsu(n);
            for (auto &[u, v, w] : edges) {
                if ((w & (1 << bit)) == 0) {
                    dsu.unite(u, v);
                }
            }

            if (dsu.connected()) {
                vector<tuple<int, int, int>> filtered;
                for (auto &[u, v, w] : edges) {
                    if ((w & (1 << bit)) == 0) {
                        filtered.push_back({u, v, w});
                    }
                }
                edges = move(filtered);
                maxMask ^= (1 << bit);  
            }
        }

        cout << maxMask << '\n';
    }

    return 0;
}
