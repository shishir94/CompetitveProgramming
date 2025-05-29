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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        sort(ar.begin(), ar.end());

        int i = 0;
        int j = n - 1;
        int cnt1 = 0, cnt2 = 0;
        while (j >= 0 && ar[j] % 2 != ar[0] % 2)
        {
            cnt1++;
            j--;
        }

        while (i < n && ar[n - 1] % 2 != ar[i] % 2)
        {
            cnt2++;
            i++;
        }
        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}