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
        string s;
        cin>>s;
        if(s.size() ==1 )cout<<"NO"<<endl;
        else{
            map<char,int>mp;
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
            }
            if(mp.size() ==1) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                int n = s.size();
                bool p = false;
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i != j){
                            if(s[i] != s[j]){
                                swap(s[i],s[j]);
                                p=true;
                                break;
                            }
                        }
                        
                    }
                    if(p){
                        break;
                    }
                }
                cout<<s<<endl;
            }
        }
    }
    return 0;
}