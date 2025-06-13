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
        int n,m;
        cin>>n>>m;
        vector<int>p(n);
        for(int i=0;i<n;i++) cin>>p[i];
        int first = -1,second =-1;
        for(int i=0;i<n;i++){
            if(p[i] == 1){
                if(first == -1) first = i;
                else second = i;
            }
        }
        if(first ==-1) cout<<"YES"<<endl;
        else{
            if(second == -1){
                if(m >= 1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                if(second-first+1 <= m){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}