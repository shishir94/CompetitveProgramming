#include <bits/stdc++.h>
using namespace std;

long long res = 0;

class DisjointSet {
public:
    vector<int> parent, rank, size;
    
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }

    int find(int node) {
        if (node == parent[node]) return node;
        return parent[node] = find(parent[node]);
    }

    long long count(int x) {
        return 1LL * x * (x - 1) / 2;
    }

    void unionByRank(int u, int v) {
        int p1 = find(u), p2 = find(v);
        if (p1 == p2) return;

        res -= count(size[p1]);
        res -= count(size[p2]);

        if (rank[p1] > rank[p2]) {
            parent[p2] = p1;
            size[p1] += size[p2];
            res += count(size[p1]);
        } else if (rank[p1] < rank[p2]) {
            parent[p1] = p2;
            size[p2] += size[p1];
            res += count(size[p2]);
        } else {
            parent[p2] = p1;
            size[p1] += size[p2];
            rank[p1]++;
            res += count(size[p1]);
        }
    }
};

static bool comp(vector<int>& a, vector<int>& b) {
    return a[2] < b[2];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges;
    for (int i = 0; i < n - 1; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({u, v, wt});
    }

    vector<pair<int, int>> q;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push_back({x, i});
    }

    sort(q.begin(), q.end());
    sort(edges.begin(), edges.end(), comp);

    vector<long long> ans(m);
    DisjointSet dsu(n);

    int start = 0;
    for (int i = 0; i < m; i++) {
        int dist = q[i].first, ind = q[i].second;
        while (start < edges.size() && edges[start][2] <= dist) {
            dsu.unionByRank(edges[start][0], edges[start][1]);
            start++;
        }
        ans[ind] = res;
    }

    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
