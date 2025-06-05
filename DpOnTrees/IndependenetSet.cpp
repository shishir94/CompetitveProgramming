#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7;

vector<vector<long long>>dp;
long long color(int node, int parent, int parent_color, vector<vector<int>>& g) {
    long long total_ways = 1;

    if(dp[node][parent_color] != -1) return dp[node][parent_color];
    for (auto child : g[node]) {
        if (child != parent) {
            if (parent_color == 0) {
                total_ways *= color(child, node, 1, g);
                total_ways %= MOD;
            } else {
                long long black = color(child, node, 0, g);
                long long white = color(child, node, 1, g);
                total_ways *= (black + white) % MOD;
                total_ways %= MOD;
            }
        }
    }

    return dp[node][parent_color] = total_ways % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; i++) { 
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dp.resize(n+1,vector<long long>(2,-1));
    long long black_root = color(1, 0, 0, g);
    long long white_root = color(1, 0, 1, g);

    cout << (black_root + white_root) % MOD << "\n";

    return 0;
}
