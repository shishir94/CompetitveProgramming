#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    if(x == 0){
        cout<<0<<endl;
        return;
    }

    vector<int>dp(x+1,INT_MAX);
    dp[0] = 0;

    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i >= c[j] && dp[i-c[j]] != INT_MAX) dp[i] = min(dp[i],1+dp[i-c[j]]);
        }
    }

    cout<<((dp[n] == INT_MAX)?-1:dp[n])<<endl;
}

int main() {
    solve();
    return 0;
}
