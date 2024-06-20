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
        long long n,a,b;
        cin>>n>>a>>b;

        if(a>=b){
            long long profit = (n)*a;
            cout<<profit<<endl;
        }
        else{
            long long k = (b-a+1);
            k = min(k,n);
            // cout<<k<<endl;
            long long profit = (n-k)*a;
            long long value = 0,value1 = 0;
            long long n1 = b;
            long long n2 = b-k;
            if(n1%2 == 0){
                value = n1/2;
                value *= (n1+1);
            }
            else{
                value = (n1+1)/2;
                value *= (n1);
            }
            if(n2%2 == 0){
                value1 = n2/2;
                value1 *= (n2+1);
            }
            else{
                value1 = (n2+1)/2;
                value1 *= (n2);
            }
            profit += (value-value1);
            cout<<profit<<endl;
        }
    }
    return 0;
}