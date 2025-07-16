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

void solve(vector<long long>& v){
    int n = v.size();
    if(n == 2) {
        cout<<"Yes"<<endl;
        return;
    }

    if(abs(v[0]) == abs(v[n-1])){
        int x = 0,y = 0;
        for(int i=0;i<n;i++){
            if(v[i]>0) x++;
            else y++;
        }

        if(x == n || y == n || abs(x-y) <= 1) {
            cout<<"Yes"<<endl;
            
        }
        else cout<<"No"<<endl;
        return;
    }

    for(int i=1;i<n-1;i++){
        if(v[i]*v[i] != v[i-1]*v[i+1]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    return;
}

static bool comp(long long x,long long y){
    return abs(x) < abs(y);
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

        sort(v.begin(),v.end(),comp);
        
        solve(v);
    }
    return 0;
}