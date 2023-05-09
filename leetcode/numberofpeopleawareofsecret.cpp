#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,delay,forget;
    cin>>n>>delay>>forget;
    int mod = 1000000007;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    int ans =0;
    for(int i=2;i<=n;i++){
        ans = ans + dp[max(i-delay,0)]-dp[max(0,i-forget)];
        ans = ans%mod;
        dp[i]=ans;
    }
    int ans1=0;
    for(int i=n-forget+1;i<=n;i++){
        ans1 = ans1+dp[i];
        ans1= ans1%mod;
    }
    cout<<ans1<<endl;
    
}
return 0;
}