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

bool valid(string a,string b){
    int n = a.size();
    int m = b.size();
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return i>=n;
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
        string a,b;
        cin>>a>>b;
        int low=0;
        int high=n;
        int ans = 0;
        while(low <= high){
            int mid = (low+high)/2;
            string x = a.substr(0,mid);
            if(valid(x,b)){
                ans = mid;
                low =mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}