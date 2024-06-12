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
        long long l,r,k;
        cin>>l>>r>>k;

        long long valid = (9/k);
        long long mod = 1e9+7;
        long long ans = ((modular_power(valid+1,r,mod)-modular_power(valid+1,l,mod)+mod)%mod);
        cout<<ans<<endl;
    }
    return 0;
}