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
        string t = "";
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i]) == mp.end()){
                t += s[i];
            }
            mp[s[i]]++;
        }
        sort(t.begin(),t.end());
        // cout<<t<<endl;
        unordered_map<char,char>m;
        int i=0;
        int j = t.size()-1;
        while(i<=j){
            m[t[i]] = t[j];
            m[t[j]] = t[i];
            i++;
            j--;
        }

        for(int i=0;i<n;i++){
            s[i] = m[s[i]];
        }
        cout<<s<<endl;
    }
    return 0;
}