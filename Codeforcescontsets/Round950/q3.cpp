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
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        for(long long i=0;i<n;i++) cin>>b[i];
        long long m;
        cin>>m;
        long long d[m];
        for(long long i=0;i<m;i++) cin>>d[i];
        map<long long,long long>mp,mp1;
        for(long long i=0;i<m;i++){
            mp[d[i]]=i;
        }
        map<long long,long long>dif;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i]) dif[b[i]]++;
        }

        map<long long,long long>mpl;
        for(int i=0;i<m;i++) mpl[d[i]]++;

        bool x = true;
        for(auto itr = dif.begin();itr!=dif.end();itr++)
        {
            int val = itr->first;
            int count = itr->second;

            if(count > mpl[val]){
                x=false;
                break;
            }
        }
        if(x == false) cout<<"NO"<<endl;
        else{
            long long mx=-1;
            bool p = true;
            for(long long i=0;i<n;i++)
            {
                if(a[i] != b[i])
                {
                    if(mp.find(b[i]) == mp.end()){
                        p=false;
                        break;
                    }
                    else{
                        mx = max(mx,mp[b[i]]);
                    }
                }
                mp1[b[i]]++;
            }

            if(!p) cout<<"NO"<<endl;
            else{
                if(mx == m-1) cout<<"YES"<<endl;
                else{
                    long long val = d[m-1];
                    if(mp1.find(val) != mp1.end()) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}