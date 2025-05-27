#include <bits/stdc++.h>
using namespace std;

// Type definitions
#define int long long
#define vi vector<int>
#define vc vector
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; ++i)

// Constants
const int INF = 1e16;
int dis[2505];
vi adj[2505], adj2[2505];
bool vis[2505], vis2[2505];

// DFS to check reachability from node 1
void dfs(int s) {
    if (vis[s]) return;
    vis[s] = true;
    for (auto i : adj[s]) dfs(i);
}

// DFS on reverse graph to check reachability to node n
void dfs2(int s) {
    if (vis2[s]) return;
    vis2[s] = true;
    for (auto i : adj2[s]) dfs2(i);
}

void solve() {
    int n, m;
    cin >> n >> m;

    // Initialize distances to infinity
    rep(i, 1, n + 1) dis[i] = INF;
    dis[1] = 0;

    // Store all edges in a tuple (a, b, -w) to use Bellman-Ford
    vc<tuple<int, int, int>> edges;
    rep(i, 0, m) {
        int a, b, w;
        cin >> a >> b >> w;
        edges.pb({a, b, -w});
        adj[a].pb(b);
        adj2[b].pb(a);  // Reverse graph for second DFS
    }

    // Run DFS from node 1 to mark reachable nodes
    dfs(1);
    // Run DFS from node n on reverse graph to mark nodes that can reach n
    dfs2(n);

    // Bellman-Ford to find shortest paths from node 1
    rep(i, 0, n) {
        for (auto [a, b, w] : edges) {
            if (dis[a] != INF && dis[b] > dis[a] + w) {
                dis[b] = dis[a] + w;
                // If we find an update on the n-th iteration and node is in valid path
                if (i == n - 1 && vis[b] && vis2[b]) {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }

    // Output the longest path (since we inverted edge weights)
    cout << -dis[n] << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
