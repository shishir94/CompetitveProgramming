#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// long long modular_power(long long x, long long y, long long p) {
//     long long res = 1;
//     while (y > 0) {
//         if (y % 2 == 1) {
//             res = (res * x) % p;
//         }
//         y = y >> 1;
//         x = (x * x) % p;
//     }
//     return res % p;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> p(n);
        for (long long i = 0; i < n; i++) cin >> p[i];

        long long y = n * p[0] - p[n - 1];
        long long x = p[0] - n * p[n - 1];
        long long den = n * n - 1;

        if (y % den == 0 && x % den == 0) {
            y = y / den;
            x = -x / den;

            if (y >= 0 && x >= 0) {
                bool ok = true;
                for (long long i = 2; i < n; i++) {
                    long long val = x * i + y * (n - i + 1);
                    if (val != p[i - 1]) {
                        ok = false;
                        break;
                    }
                }
                cout << (ok ? "YES" : "NO") << '\n';
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
