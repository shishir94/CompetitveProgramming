#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<vector<double>> dp(n, vector<double>(n + 1, 0.0));
    dp[0][0] = 1 - v[0];  
    dp[0][1] = v[0];      

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i + 1; j++) {
            dp[i][j] += dp[i - 1][j] * (1 - v[i]);

            if (j > 0) {
                dp[i][j] += dp[i - 1][j - 1] * v[i];
            }
        }
    }

    
    double ans = 0.0;
    for (int i = n / 2 + 1; i <= n; i++) {
        ans += dp[n - 1][i];
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
