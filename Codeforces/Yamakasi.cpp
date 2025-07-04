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
        long long n,s,x;
        cin>>n>>s>>x;

        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        map<long long,vector<int>>mp;
        long long sum = 0;
        long long ans = 0;

        mp[0].push_back(-1);
        int last = -1;
        for(int i=0;i<n;i++){
            if(a[i]>x){
                mp.clear();
                sum = 0;
                last= -1;
                mp[0].push_back(i);
            }
            else if(a[i]<x){
                sum += a[i];
                mp[sum].push_back(i);
                long long req = sum-s;
                if(last != -1){
                    int ind = upper_bound(mp[req].begin(),mp[req].end(),last-1)-mp[req].begin();
                    ans += ind;
                }
            }
            else{
                sum += a[i];
                last = i;
                long long req = sum-s;

                int ind = upper_bound(mp[req].begin(),mp[req].end(),last-1)-mp[req].begin();
                ans += ind;

                mp[sum].push_back(i);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}