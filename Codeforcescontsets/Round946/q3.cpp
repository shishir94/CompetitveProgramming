#include <bits/stdc++.h>
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

long long solve(map<pair<int, int>, map<int, int>>& m) {
    long long ans = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        map<int, int> mp1 = itr->second;
        vector<int> p;

        for (auto itr1 = mp1.begin(); itr1 != mp1.end(); itr1++) {
            p.push_back(itr1->second);
        }
        int sum = p.back();
        for (int i = p.size() - 2; i >= 0; i--) {
            ans += (sum * p[i]);
            sum += p[i];
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n < 3) {
            cout << 0 << endl;
            continue;
        }

        vector<vector<int>> v(n - 2);
        for (int i = 0; i < n - 2; i++) {
            v[i] = {arr[i], arr[i + 1], arr[i + 2]};
        }

        map<pair<int, int>, map<int, int>> first, second, third;
        for (int i = 0; i < v.size(); i++) {
            first[{v[i][0], v[i][1]}][v[i][2]]++;
            second[{v[i][0], v[i][2]}][v[i][1]]++;
            third[{v[i][1], v[i][2]}][v[i][0]]++;
        }

        long long ans = 0;
        ans += solve(first);
        ans += solve(second);
        ans += solve(third);

        cout << ans << endl;
    }
    return 0;
}
