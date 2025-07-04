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
        int n,s;
        cin>>n>>s;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        if(s <= v[0]){
            cout<<v[n-1]-s<<endl;
        }
        else if(s>v[0] && s <= v[n-1]){
            int l1 = s-v[0] + v[n-1]-v[0];
            int l2 = v[n-1]-s+v[n-1]-v[0];

            cout<<min(l1,l2)<<endl;
        }
        else{
            cout<<s-v[0]<<endl;
        }
    }
    return 0;
}