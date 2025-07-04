#include<bits/stdc++.h>
using namespace std;

int main(){

    // (i,k) we either take it then ==> (i,k-ci) which is current state or not take it ==> (i+1,k) and this nextState.
    int n,x;
    cin>>n>>x;

    vector<int>coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    int mod = 1e9+7;

    // vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    vector<int>nextState(x+1,0);
    nextState[0]=1;

    // for(int i=0;i<=n;i++) dp[i][0]=1;

    for(int i=n-1;i>=0;i--){
        vector<int>currentState(x+1,0);
        currentState[0]=1;
        for(int sum=1;sum<=x;sum++){
            // int skip = dp[i+1][sum];
            int skip = nextState[sum];
            int take = 0;
            if(coins[i] <= sum){
                // take += dp[i][sum-coins[i]];
                take += currentState[sum-coins[i]];
            }

            // dp[i][sum] = (skip%mod+take %mod)%mod;
            currentState[sum] = (skip%mod+take%mod)%mod;
            
        }
        nextState = currentState;
    }
    // cout<<dp[0][x]<<endl;
    cout<<nextState[x]<<endl;
    return 0;
}