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
        long long n,c;
        cin>>n>>c;
        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        arr[0]+=c;
        long long mx_vote = arr[0];
        int max_ind = 0;
        for(int i=0;i<n;i++) {
            if(mx_vote < arr[i]){
                mx_vote = arr[i];
                max_ind = i;
            }
        }
        vector<long long>prefix(n,0);
        prefix[0] = arr[0];
        for(int i=1;i<n;i++) prefix[i] = arr[i]+prefix[i-1];
        vector<int>ans(n,0);
        long long prefix_sum =0;
        for(int i=0;i<n;i++){
            if(i == max_ind) ans[i] = 0;
            else{
                if(prefix[i]>= mx_vote) ans[i] = i;
                else ans[i] = i+1;
            }
        }

        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}