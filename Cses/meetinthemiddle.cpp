#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void subset_sum(const vector<long long>& v, int start, int end, vector<long long>& p, long long sum) {
    if (start == end) {
        p.push_back(sum);
        return;
    }
    subset_sum(v, start + 1, end, p, sum);           
    subset_sum(v, start + 1, end, p, sum + v[start]); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    long long x;
    cin >> n >> x;

    vector<long long> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    vector<long long> first_half, second_half;
    subset_sum(v, 0, n / 2, first_half, 0);
    subset_sum(v, n / 2, n, second_half, 0);

    sort(second_half.begin(),second_half.end());

    // map<long long, long long> mp;
    // for (auto val : second_half) {
    //     mp[val]++;
    // }

    long long ans = 0;
    for (auto val : first_half) {
        long long req = x - val;
        // if (mp.find(req) != mp.end()) {
        //     ans += mp[req];
        // }

        long long left = lower_bound(second_half.begin(),second_half.end(),req)-second_half.begin();
        long long right = upper_bound(second_half.begin(),second_half.end(),req)-second_half.begin();

        ans += (right-left);
    }

    cout << ans << '\n';
    return 0;
}
