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
        int n,k,q;
        cin>>n>>k>>q;
        vector<long long>a(k),b(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++) cin>>b[i];
        while(q--){
            long long d;
            cin>>d;
            int id = lower_bound(a.begin(),a.end(),d)-a.begin();
            if(a[id] == d) cout<<b[id]<<" ";
            else{
                long long di = id==0 ? a[id]:(a[id]-a[id-1]);
                long long time = id==0 ? b[id]:(b[id]-b[id-1]);
                d = (id==0)?d:d-a[id-1];
                long long final_time = (1LL * d * (time)) / (di);
                final_time = id==0?final_time:final_time+b[id-1];
                cout<<final_time<<" ";
            }
        }

        cout<<endl;

    }
    return 0;
}



