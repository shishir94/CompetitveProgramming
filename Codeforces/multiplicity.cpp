#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        vector<int> div;
        for (int j = 1; j * j <= v[i]; j++) {
            if (v[i] % j == 0) {
                div.push_back(j);
                if (v[i] / j != j) div.push_back(v[i] / j);
            }
        }

        sort(div.rbegin(), div.rend()); 

        for (int d : div) {
            if (d <= n) {
                dp[d] = (dp[d] + dp[d - 1]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[i]) % MOD;
    }

    cout << ans << endl;
    return 0;
}
