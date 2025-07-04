#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long dp[103][103][103];

long long solve(int ind, int cnt, int pre, int k, vector<int> &arr, vector<vector<int>> &cost)
{
    if (ind == arr.size())
    {
        return (cnt == k) ? 0 : 1e15;
    }

    if (dp[ind][cnt][pre + 1] != -1)
        return dp[ind][cnt][pre + 1];

    long long ans = 1e15;

    if (arr[ind] != 0)
    {
        int new_count = (arr[ind] == pre) ? cnt : cnt + 1;
        ans = solve(ind + 1, new_count, arr[ind], k, arr, cost);
    }
    else
    {
        for (int color = 1; color <= cost[0].size(); color++)
        {
            int new_count = (color == pre) ? cnt : cnt + 1;
            long long res = solve(ind + 1, new_count, color, k, arr, cost);
            if (res != 1e15)
                ans = min(ans, cost[ind][color - 1] + res);
        }
    }

    return dp[ind][cnt][pre + 1] = ans;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> cost[i][j];

    memset(dp, -1, sizeof(dp));

    long long res = solve(0, 0, -1, k, v, cost);
    cout << (res >= 1e15 ? -1 : res) << '\n';

    return 0;
}



