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
        string s;
        cin>>s;

        vector<int>p(26,-1);
        bool f = false;
        for(int i=0;i<n-1;i++){
            if(p[s[i]-'a'] == -1) p[s[i]-'a']=i;
            else{
                f=true;
                break;
            }
        }
        vector<int>h(26,-1);
        for(int i=n-1;i>0;i--){
            if(h[s[i]-'a'] == -1) h[s[i]-'a']=i;
            else{
                f=true;
                break;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}