#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool valid(long long k,vector<long long>&v){
    vector<long long>l;
    int n = v.size();
    for(int i=0;i<v.size();i++)
    {
        long long coins = k/v[i];
        l.push_back(coins+1); 
    }
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += l[i];
    }
    return sum <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        long long low = 1;
        long long high = 1e9;
        long long d = -1;
        while(low <= high)
        {
            long long mid = (low+high)/2;
            if(valid(mid,arr))
            {
                d = mid;
                high = mid-1;   
            }
            else{
                low = mid+1;
            }
        }

        if(d == -1) cout<<"-1"<<endl;
        else{
            for(int i=0;i<n;i++)
            {
                long long coin = (d/arr[i])+1;
                cout<<coin<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}