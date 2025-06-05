#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<pair<long long, long long>>> g;
vector<long long> D;
vector<vector<long long>> dp;

bool comp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return (a.first - a.second) < (b.first - b.second);
}

long long solve(long long node, long long isParentRemoved, long long parent)
{
    if (dp[node][isParentRemoved] != -1e18)
        return dp[node][isParentRemoved];

    long long removed = max(0ll, (long long)g[node].size() - D[node] - isParentRemoved);
    vector<pair<long long, long long>> temp;
    long long ans = 0;

    for (auto child : g[node]) {
        if (child.first != parent) {
            if (D[child.first] == 0) {
                long long remove = solve(child.first, 1, node);
                temp.push_back({-1e18, remove}); 
            } else {
                long long dontRemove = solve(child.first, 0, node) + child.second;
                long long remove = solve(child.first, 1, node);
                temp.push_back({dontRemove, remove});
            }
        }
    }
    

    sort(temp.begin(), temp.end(), comp);

    for (long long i = 0; i < temp.size(); i++) {
        long long dontRemove = temp[i].first, remove = temp[i].second;
    
        if (i < removed)
            ans += remove;
        else
            ans += max(dontRemove, remove);
    }
    return dp[node][isParentRemoved] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    D.resize(n);
    for (long long i = 0; i < n; i++)
        cin >> D[i];

    g.resize(n);
    for (long long i = 0; i < n - 1; i++)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dp.assign(n, vector<long long>(2, -1e18));

    cout << solve(0, 0, -1) << '\n';
    return 0;
}
