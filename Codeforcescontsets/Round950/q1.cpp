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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        int ans = max(0,m-mp['A'])+max(0,m-mp['B'])+max(0,m-mp['C'])+max(0,m-mp['D'])+max(0,m-mp['E'])+max(0,m-mp['F'])+max(0,m-mp['G']);
        cout<<ans<<endl;
    }
    return 0;
}
