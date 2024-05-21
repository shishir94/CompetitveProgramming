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
        int x,y;
        cin>>x>>y;

        int d = (y+1)/2;
        int left = (y/2)*7;
        if(y%2) left += 11;

        if(x <= left){
            cout<<d<<endl;
        }
        else{
            x -= left;
            int ans = (x/15);
            ans = (x%15==0) ?ans:ans+1;
            cout<<d+ans<<endl;
        }
    }
    return 0;
}