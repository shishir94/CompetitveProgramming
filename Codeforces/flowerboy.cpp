#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<long long> b(m);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] >= b[j]) {
                i++;
                j++;
            } else {
                i++;
            }
        }

        if (j == m) {
            cout << 0 << endl;
        } else {

            if(m == 1) cout<<b[0]<<endl;
            else{
                vector<long long> pre(m, n);
                vector<long long> suf(m, -1);

                // Compute pre[]
                i = 0;
                j = 0;
                while (i < n && j < m) {
                    if (a[i] >= b[j]) {
                        pre[j] = i;
                        i++;
                        j++;
                    } else {
                        i++;
                    }
                }

                // Compute suf[]
                i = n - 1;
                j = m - 1;
                while (i >= 0 && j >= 0) {
                    if (a[i] >= b[j]) {
                        suf[j] = i;
                        i--;
                        j--;
                    } else {
                        i--;
                    }
                }

                // Debug output
                // for (int i = 0; i < m; i++) cout << pre[i] << " ";
                // cout << endl;
                // for (int i = 0; i < m; i++) cout << suf[i] << " ";
                // cout << endl;

                long long ans = LLONG_MAX;
                for (int i = 0; i < m; i++) {
                    if (i == 0) {
                        if (m > 1 && suf[i + 1] >= 0)
                            ans = min(ans, b[i]);
                    } else if (i == m - 1) {
                        if (pre[i - 1] < n)
                            ans = min(ans, b[i]);
                    } else {
                        if (pre[i - 1] < suf[i + 1])
                            ans = min(ans, b[i]);
                    }
                }

                if (ans == LLONG_MAX) ans = -1;
                cout << ans << endl;
            }
        }
    }

    return 0;
}
