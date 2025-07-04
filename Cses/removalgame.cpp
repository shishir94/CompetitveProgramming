#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            int moves_done = n - (j - i + 1);

            if (i == j) {
                dp[i][j] = (moves_done % 2 == 0) ? v[i] : 0;
            } else if (moves_done % 2 == 0) {
                dp[i][j] = max(v[i] + dp[i + 1][j], v[j] + dp[i][j - 1]);
            } else {
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[0][n - 1] << endl;

    return 0;
}
