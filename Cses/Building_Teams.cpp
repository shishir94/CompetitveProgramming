#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> color, vis;

bool bfs(vector<vector<int>>& g, int node) {
    queue<pair<int, int>> q;
    q.push({node, 0});
    color[node] = 0;
    vis[node] = 1;

    while (!q.empty()) {
        int curr = q.front().first;
        int currColor = q.front().second;
        q.pop();

        for (auto& neighbor : g[curr]) {
            if (!vis[neighbor]) {
                vis[neighbor] = 1;
                color[neighbor] = 1 - currColor;
                q.push({neighbor, 1 - currColor});
            } else {
                if (color[neighbor] == currColor)
                    return false;
            }
        }
    }
    return true;
}

void solve(vector<vector<int>>& g, int n) {
    color.assign(n + 1, -1); 
    vis.assign(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            if (!bfs(g, i)) {
                cout << "IMPOSSIBLE\n";
                return;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << color[i] + 1 << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    solve(g, n);
    return 0;
}
