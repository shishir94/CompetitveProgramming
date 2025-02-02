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

long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    set<pair<long long,long long>>st;
    for(int i=1;i<n;i++){
        long long p = gcd(a[i],a[i-1]);
        st.insert({a[i]/p,a[i-1]/p});
    }
    if(st.size() == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}