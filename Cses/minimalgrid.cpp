#include <bits/stdc++.h>
using namespace std;


// getting Runtime error -->>
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v[i] = s;
    }

    vector<vector<string>> dp(n, vector<string>(n, ""));
    dp[0][0] += v[0][0];
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][0] + v[i][0];
        dp[0][i] = dp[0][i - 1] + v[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (dp[i - 1][j] <= dp[i][j - 1])
                dp[i][j] = dp[i - 1][j] + v[i][j];
            else
                dp[i][j] = dp[i][j - 1] + v[i][j];
        }
    }

    cout << dp[n - 1][n - 1] << endl;
    return 0;
}