#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

bool solve(vector<long long>& a)
{
    long long pre = gcd(a[0],a[1]);
    for(long long i=1;i<a.size()-1;i++)
    {
        long long cur = gcd(a[i],a[i+1]);
        if(cur < pre) return false;
        pre =cur;
    }

    return true;
}

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
        vector<long long>a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        long long pre = -1;
        long long ind = -1;
        for(long long i=0;i<n-1;i++)
        {
            long long cur = gcd(a[i],a[i+1]);
            if(cur < pre)
            {
                ind = i;
                break;
            }
            pre = cur;
        }

        if(ind == -1)
        {
            cout<<"YES"<<endl;
        }
        else{
            vector<long long>b0 = a,b1=a,b2=a;
            if(ind > 0) b0.erase(b0.begin()+ind-1);
            b1.erase(b1.begin()+ind);
            if(ind < n-1) b2.erase(b2.begin()+ind+1);
            if(solve(b0) || solve(b1) || solve(b2))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}