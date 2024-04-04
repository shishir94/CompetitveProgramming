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
        int val = 1;
        for (int i = 0; i < 2 * n; i += 2)
        {
            if (i % 2 == 0)
                val = 1 - val;
            int cnt = val;
            for (int j = 0; j < 2 * n; j += 2)
            {
                if (cnt == 0)
                {
                    cout << "#"
                         << "#";
                    cnt = 1;
                }
                else
                {
                    cout << "."
                         << ".";
                    cnt = 0;
                }
            }
            cout << endl;
            cnt = val;
            for (int j = 0; j < 2 * n; j += 2)
            {
                if (cnt == 0)
                {
                    cout << "#"
                         << "#";
                    cnt = 1;
                }
                else
                {
                    cout << "."
                         << ".";
                    cnt = 0;
                }
            }
            cout << endl;
        }
        // cout<<endl;
    }
    return 0;
}