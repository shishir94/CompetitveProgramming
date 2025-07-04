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
        vector<vector<int>>a(n,vector<int>(m));
        int mx = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                mx = max(mx,a[i][j]);
            }
        }
        int total = 0;
        vector<int>row(n),col(m);
        for(int i=0;i<n;i++) {
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(a[i][j] == mx){
                    cnt++;
                }
            }
            total += cnt;
            row[i] = cnt;
        }

        for(int j=0;j<m;j++){
            int cnt = 0;
            for(int i=0;i<n;i++){
                if(a[i][j] == mx) cnt++;
            }

            col[j] = cnt;
        }
        bool f =false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // chooose r = i and c = j;
                int removed = row[i]+col[j]-(a[i][j] == mx ?1:0);
                if(removed == total){
                    f=true;
                    break;
                }
            }
        }
        if(f) cout<<mx-1<<endl;
        else cout<<mx<<endl;
    }
    return 0;
}