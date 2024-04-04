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
        int n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans = 0;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum <0){
                sum =0;
            }
            ans = max(ans,sum);
        }
        long long val = 0;
        int mod = 1e9+7;
        for(int i=0;i<n;i++){
            val += arr[i];
            val %= mod;
        }
        // long long po = modular_power(2,k,mod);
        // val += (ans*(po-1))%mod;
        // if(val < 0) val += mod;
        // val %= mod;
        // cout<<val<<endl;
        val = (val % mod + mod) % mod;
        ans = ans % mod;
        int t = 1;
        for (int i = 0; i < k; i++) {
            t = t * 2 % mod;
        }
        val = (val + ans * t - ans + mod) % mod;
        cout << val << '\n';
    }
    return 0;
}