#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long modular_power(long long x, long long y, long long p)
{

    long long res = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res % p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        int val = p[0];
        int cnt = 0;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == val)
                cnt++;
            else
            {
                v.push_back({val, cnt});
                val = p[i];
                cnt = 1;
            }
        }
        v.push_back({val, cnt});
        long long ans = 1e15;

        for (int i = 0; i < v.size(); i++)
        {
            long long temp = 1ll * (v[i].first) * (n - v[i].second);
            ans = min(ans, temp);
        }

        cout << ans << endl;
    }
    return 0;
}