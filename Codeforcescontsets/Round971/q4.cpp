#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long valid(long long mid, long long k, long long left_sum) {
    long long last = k + mid - 1;
    long long right_sum = (last * (last + 1)) / 2;
    long long total = right_sum - left_sum;
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long low = 1, high = n - 1;
        long long sum = 0;

        long long left_sum = (k * (k - 1)) / 2;

        long long last = k + n - 1;
        long long right_sum = (last * (last + 1)) / 2;

        sum = right_sum - left_sum;
        long long ans = LLONG_MAX;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long current_valid = valid(mid, k, left_sum);
            if (current_valid <= (sum / 2)) {
                ans = min(ans, abs(sum - 2 * current_valid));
                low = mid + 1;
            } else {
                ans = min(ans, abs(sum - 2 * current_valid));
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
