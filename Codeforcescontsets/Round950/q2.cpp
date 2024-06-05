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
        int n,f,k;
        cin>>n>>f>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<pair<int,int>>v;
        int val = arr[f-1];
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int value = v[k-1].first;
        
        if(val < value)
        {
            cout<<"NO"<<endl;
        }
        else if(val >value) {
            cout<<"YES"<<endl;
        }
        else{
            int cnt = 0;
            for(int i=0;i<n;i++)
            {
                if(arr[i] == val) cnt++;
            }

            int left = 0;
            for(int i=0;i<k;i++){
                if(v[i].first == val) left++;
            }

            if(left < cnt) cout<<"Maybe"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}