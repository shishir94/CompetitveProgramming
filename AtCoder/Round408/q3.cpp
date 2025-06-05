#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,m;
        cin>>n>>m;

        vector<int>dp(n+1,0);

        for(int i=0;i<m;i++){
            int l,r;
            cin>>l>>r;

            dp[l]++;
            dp[r+1]--;
        }
        
        int ans = INT_MAX;
        for(int i=1;i<=n;i++) dp[i] += dp[i-1];

        for(int i=1;i<=n;i++) {
            ans = min(ans,dp[i]);
        }

        cout<<ans<<endl;
    return 0;
}