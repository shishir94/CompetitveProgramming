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
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        set<long long>st;
        st.insert(v[0]);
        set<long long>cur;

        int ans = 0;
        for(int i=1;i<n;i++){
            cur.insert(v[i]);

            if(st.find(v[i]) != st.end()){
                st.erase(st.find(v[i]));
            }

            if(st.empty()){
                st = cur;
                cur.clear();
                ans++;
            }
        }
        cout<<(ans+1)<<endl;
    }
    return 0;
}