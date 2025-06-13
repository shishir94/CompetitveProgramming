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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            if(a[i] == a[i+1] || b[i] == b[i+1]){
                ans = i+1;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(a[i] == b[i]) ans = max(ans,i+1);
        }
        unordered_map<int,int>ma,mb;
        for(int i=n-1;i>=0;i--){
            if((mb.find(a[i]) != mb.end() && mb[a[i]] > (i+1)) || (ma.find(b[i]) != ma.end() && ma[b[i]] > (i+1)) ){
                ans = max(ans,i+1);
                break;
            }

            if(ma.find(a[i]) == ma.end()) ma[a[i]] =i;
            if(mb.find(b[i]) == mb.end()) mb[b[i]]=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}