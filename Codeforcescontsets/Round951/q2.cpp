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
        long long x,y;
        cin>>x>>y;

        long long val = x^y;
        long long ans = 1;
        while(val %2 == 0)
        {
            val/=2;
            ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}