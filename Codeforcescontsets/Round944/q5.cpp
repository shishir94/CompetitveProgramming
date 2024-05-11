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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            int val = 0;
            for(int j=2;j<32;j++){
                if(arr[i] & (1<<j)){
                    val |= (1<<j);
                }
            }
            mp[val].push_back(i);
        }

        vector<int>ans(n,0);
        for(auto itr = mp.begin();itr != mp.end();itr++){
            vector<int>v = itr->second;
            vector<int>p;
            for(int i=0;i<v.size();i++){
                p.push_back(arr[v[i]]);
            }
            sort(p.begin(),p.end());
            sort(v.begin(),v.end());

            for(int j=0;j<v.size();j++){
                ans[v[j]] = p[j];
            }
        }

        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}