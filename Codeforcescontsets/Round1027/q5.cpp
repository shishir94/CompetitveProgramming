#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long modular_power(long long x, long long y, long long p) {
    long long res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % p;
        }
        y >>= 1;
        x = (x * x) % p;
    }
    return res % p;
}

vector<vector<int>> g;
vector<long long> max_sum, min_sum, danger, threat;

void dfs(int node, int parent) {
    if (parent == -1) {
        max_sum[node] = danger[node];
        min_sum[node] = danger[node];
    } else {
        max_sum[node] = max(danger[node], danger[node] - min_sum[parent]);
        min_sum[node] = min(danger[node], danger[node] - max_sum[parent]);
    }

    threat[node] = max(danger[node], max_sum[node]);

    for (auto child : g[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        g.assign(n, {});
        danger.assign(n, 0);
        max_sum.assign(n, 0);
        min_sum.assign(n, 0);
        threat.assign(n, 0);

        for (int i = 0; i < n; i++) cin >> danger[i];

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            g[u - 1].push_back(v - 1);
            g[v - 1].push_back(u - 1);
        }

        dfs(0, -1);

        for (int i = 0; i < n; i++) cout << threat[i] << " ";
        cout << '\n';
    }
    
    return 0;
}
