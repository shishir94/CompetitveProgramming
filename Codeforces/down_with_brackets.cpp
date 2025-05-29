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
        cin >> s;

        // stack<char> st;
        int n = s.size();
        int cnt = 0;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                cnt++;
            else
            {
                cnt--;
                if (cnt == 0)
                    val++;
            }
        }
        if (val > 1)
            cout << "YES" << endl;
        else
        {
           cout<<"NO"<<endl;
        }
    }
    return 0;
}