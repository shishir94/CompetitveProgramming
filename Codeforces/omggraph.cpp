#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank;
    vector<int> mx, mi;

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        mx.resize(n, INT_MIN);
        mi.resize(n, INT_MAX);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int node) {
        if (node == parent[node]) return node;
        return parent[node] = find(parent[node]);
    }

    void unionbyRank(int u, int v, int wt) {
        int p1 = find(u), p2 = find(v);
        if (p1 == p2) return;

        int new_mx = max({mx[p1], mx[p2], wt});
        int new_mi = min({mi[p1], mi[p2], wt});

        if (rank[p1] > rank[p2]) {
            parent[p2] = p1;
            mx[p1] = new_mx;
            mi[p1] = new_mi;
        } else if (rank[p2] > rank[p1]) {
            parent[p1] = p2;
            mx[p2] = new_mx;
            mi[p2] = new_mi;
        } else {
            parent[p2] = p1;
            rank[p1]++;
            mx[p1] = new_mx;
            mi[p1] = new_mi;
        }
    }

    long long max_len(int node) {
        int root = find(node);
        return mx[root] + mi[root];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<tuple<int, int, int>> edges(m);
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            edges[i] = {w, u, v};
        }

        sort(edges.begin(), edges.end());

        DisjointSet dsu(n);
        long long ans = 1e11;
        for (auto &[wt, u, v] : edges) {
            if (dsu.find(u) == dsu.find(v)) continue;
            dsu.unionbyRank(u, v, wt);
            if (dsu.find(0) == dsu.find(n - 1)) {
                ans = min(ans,dsu.max_len(0));
                // break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
