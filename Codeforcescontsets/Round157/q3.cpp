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
    int n;
    cin >> n;
    vector<string> v;
    map<pair<long long, long long>, long long> mp;  
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        string s = v[i];
        long long sum = 0;
        for (int j = 0; j < s.size(); j++) {
            sum += (s[j] - '0');
        }
        long long len = s.size();
        mp[{sum, len}]++;
    }

    for (int i = 0; i < n; i++) {
        string s = v[i];
        long long sum = 0;

        long long total = 0;
        long long m = s.size();
        for (int j = 0; j < s.size(); j++)
            total += (s[j] - '0');
        int c = 0;
        for (int j = 0; j < s.size(); j++) {
            sum += (s[j] - '0');
            long long x = (2 * sum - total);
            long long len = ((2 * (j + 1)) - m);
            if (mp.find({x, len}) != mp.end()) {
                ans += mp[{x, len}];
                c += mp[{x, len}];
            }
        }
        long long ct = 0;
        sum = 0;
        for (int j = m - 1; j > 0; j--) {
            sum += (s[j] - '0');
            long long x = (2 * sum - total);
            long long len = (m - (2 * j));
            if (mp.find({x, len}) != mp.end()) {
                ans += mp[{x, len}];
                ct += mp[{x, len}];
            }
        }
    }

    cout << ans << "\n";

    return 0; 
}
