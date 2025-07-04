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
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        long long ans = 0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int sum = a[i]+a[j];
                int req = a[n-1]-sum;
                int ind = lower_bound(a.begin(),a.end(),sum)-a.begin();
                
                int ind1 = upper_bound(a.begin(),a.end(),req)-a.begin();
                ind1 = max(ind1,j+1);
                if(ind>ind1) ans += (ind-ind1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}