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

bool solve(vector<int>& v, int n){
    if(n == 1) return true;
    bool val = false;
    for(int i=0;i<v.size();i++){
        if(n%v[i] == 0){
            val = val | solve(v,n/v[i]);
        }
    }
    return val;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    for (int i = 2; i <= 100001;i++)
    {
        bool f = true;
        int j = i;
        while (j > 1 && f == true)
        {
            int rem = j % 10;
            if (rem > 1)
                f = false;
                // break;
            j /= 10;
        }

        if (f)
            v.push_back(i);
    }

    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    // cout<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(solve(v,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}