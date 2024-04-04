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
        int l = (s[0]-'0')*10+(s[1]-'0');
        if(l <= 11)
        {
            if(l == 0) cout<<"12"<<s.substr(2)<<" "<<"AM"<<endl;
            else cout<<s+" "+"AM"<<endl;
        }
        else{
            if(l == 12)
            {
                cout<<s+" "+"PM"<<endl;
            }
            else{
                l = l-12;
                string h = "";
                if(l >= 0 && l < 10)
                {
                    h = "0"+to_string(l);
                }
                else{
                    h = to_string(l);
                }

                h += s.substr(2);
                cout<<h+" "+"PM"<<endl;
            }
        }
    }
    return 0;
}