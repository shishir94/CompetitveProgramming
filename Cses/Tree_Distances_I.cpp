#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

vector<vector<int>> g;

int bfs(int start, vector<int>& d) {
    queue<pair<int, int>> q;
    set<int> visited;
    q.push({start, 0});
    d[start] = 0;
    visited.insert(start);
    
    int farthest_node = start;

    while (!q.empty()) {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();

        d[node] = dist;
        if (d[farthest_node] < dist) {
            farthest_node = node;
        }

        for (auto neighbor : g[node]) {
            if (visited.find(neighbor) == visited.end()) {
                q.push({neighbor, dist + 1});
                visited.insert(neighbor);
            }
        }
    }

    return farthest_node;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    g.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> d1(n), d2(n), d3(n);

    int n1 = bfs(0, d1);       // First BFS to find one end of the diameter
    int n2 = bfs(n1, d2);      // Second BFS to find the other end
    bfs(n2, d3);               // Third BFS to get distances from other end

    for (int i = 0; i < n; i++) {
        cout << max(d2[i], d3[i]) << " ";
    }
    cout << "\n";

    return 0;
}
