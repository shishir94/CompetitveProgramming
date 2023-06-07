#include <iostream>
#include<bits/stdc++.h>
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
        int n, k, q;
        cin >> n >> k >> q;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long sum = 0;
        int cnt =0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= q) {
                cnt++;
            } else {
                cnt = 0;
            }
            if (cnt >= k) {
                sum += (cnt - k + 1);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
