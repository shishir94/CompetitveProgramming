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
    // int arr[5];
    vector<int>ar(5);
    for(int i=0;i<5;i++) cin>>ar[i];
    set<vector<int>>st;
    st.insert({2,1,3,4,5});
    st.insert({1,3,2,4,5});
    st.insert({1,2,4,3,5});
    st.insert({1,2,3,5,4});

    if(st.find(ar) != st.end()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}