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

    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool p = true;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (t + 0.5 < arr[i]-time)
        {
            p = false;
            break;
        }
        time = arr[i];
    }
    if (p)
        cout << "Yes" << endl;
    else
        cout <<"No" << endl;

    return 0;
}
