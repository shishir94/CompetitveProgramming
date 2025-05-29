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
        long long n,k;
        cin>>n>>k;

        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];


        vector<long long>c;
        set<long long>st;
        for(int i=0;i<n;i++) {
            if(b[i] != -1) {
                st.insert(a[i]+b[i]);
            }
            else c.push_back(a[i]);
        }

        sort(c.begin(),c.end());
        if(st.size()>1) cout<<0<<endl;
        else if(st.size() == 1){
            // cout<<"essme ghussa"<<endl;
            if(c.size() == 0) cout<<1<<endl;
            else{
                long long sum = *st.begin();

                long long temp = sum-c[0];
                long long temp2 = sum-c[c.size()-1];

                // cout<<sum<<" "<<temp<<" "<<temp2<<endl;
                if(temp>=0 && temp <= k && temp2 >=0 && temp2 <= k) cout<<1<<endl;
                else cout<<0<<endl;
            }
        }
        else{
            long long max_sum = c[0]+k;
            long long min_sum = c[c.size()-1];

            long long ans = max_sum-min_sum+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}