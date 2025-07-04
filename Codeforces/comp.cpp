#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank, size;
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = find(parent[node]);
    }

    void unionRank(int u, int v) {
        int p1 = find(u), p2 = find(v);
        if (p1 == p2)
            return;
        if (rank[p1] > rank[p2]) {
            parent[p2] = p1;
            size[p1] += size[p2];
        } else if (rank[p1] < rank[p2]) {
            parent[p1] = p2;
            size[p2] += size[p1];
        } else {
            parent[p2] = p1;
            size[p1] += size[p2];
            rank[p1]++;
        }
    }

    int getsize(int u) {
        return size[find(u)];
    }
};

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];

        DisjointSet dsu(n * m);

        // DSU join for existing '#'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == '#') {
                    int x = m * i + j;
                    for (int d = 0; d < 4; d++) {
                        int ni = i + dx[d], nj = j + dy[d];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m && v[ni][nj] == '#') {
                            int y = m * ni + nj;
                            dsu.unionRank(x, y);
                        }
                    }
                }
            }
        }

        int ans = 0;

        // Base answer from existing #
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (v[i][j] == '#')
                    ans = max(ans, dsu.getsize(m * i + j));

        // Try changing row i and column j together
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                set<int> comps;
                int new_cells = 0;

                // Full row i
                for (int k = 0; k < m; k++) {
                    if (v[i][k] == '#') {
                        comps.insert(dsu.find(m * i + k));
                    } else {
                        // Check up/down neighbors
                        if (i > 0 && v[i - 1][k] == '#')
                            comps.insert(dsu.find(m * (i - 1) + k));
                        if (i + 1 < n && v[i + 1][k] == '#')
                            comps.insert(dsu.find(m * (i + 1) + k));
                        new_cells++;
                    }
                }

                // Full column j
                for (int k = 0; k < n; k++) {
                    if (v[k][j] == '#') {
                        comps.insert(dsu.find(m * k + j));
                    } else {
                        // Check left/right neighbors
                        if (j > 0 && v[k][j - 1] == '#')
                            comps.insert(dsu.find(m * k + j - 1));
                        if (j + 1 < m && v[k][j + 1] == '#')
                            comps.insert(dsu.find(m * k + j + 1));
                        new_cells++;
                    }
                }

                // (i, j) was counted twice in row and column
                if (v[i][j] == '.')
                    new_cells--; // remove double count

                int total = new_cells;
                for (int id : comps)
                    total += dsu.getsize(id);

                ans = max(ans, total);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
