#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

long long modular_power(long long x, long long y, long long p) {
    long long res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res % p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<long long> vx, vy;
        vector<pair<long long, long long>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first >> v[i].second;
            vx.insert(v[i].first);
            vy.insert(v[i].second);
        }
        if (n == 1) {
            cout << 1 << endl;
        } else {
            long long ans = 1e18;
            for (int i = 0; i < n; i++) {
                vx.erase(vx.find(v[i].first));
                vy.erase(vy.find(v[i].second));
                if (!vx.empty() && !vy.empty()) {
                    long long mi_x = *vx.begin();
                    long long mx_x = *vx.rbegin();
                    long long mi_y = *vy.begin();
                    long long mx_y = *vy.rbegin();
                    long long coins = 1ll * (mx_x - mi_x + 1) * (mx_y - mi_y + 1);
                    if (coins >= n) {
                        ans = min(ans, coins);
                    } else {
                        long long temp = min(1ll * (mx_x - mi_x + 1), 1ll * (mx_y - mi_y + 1));
                        ans = min(ans, coins + temp);
                    }
                }
                vx.insert(v[i].first);
                vy.insert(v[i].second);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
