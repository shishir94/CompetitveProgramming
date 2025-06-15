#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,m;
        cin>>n>>m;

        vector<long long>v(m);
        for(int i=0;i<m;i++) cin>>v[i];

        vector<int>f(n+1,0);
        vector<int>ans(m,0);
        for(int i=0;i<m;i++){
            if(v[i] != 0){
                ans[i]= v[i];
                f[v[i]]++;
            }
            else{
                int ind = 0;
                int cnt = INT_MAX;
                for(int j=1;j<=n;j++){
                    if(cnt > f[j]){
                        cnt=f[j];
                        ind =j;
                    }
                }
                ans[i] = ind;
                f[ind]++;
            }
        }

        for(int i=0;i<m;i++) cout<<ans[i]<<" ";
        cout<<endl;
    return 0;
}