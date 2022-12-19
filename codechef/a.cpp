#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int mod = 1000000007;
long long dp[1000001];
dp[0]=1;
dp[1]=1;
for(int i =2;i<=1000000;i++){
    dp[i] = i*dp[i-1];
    dp[i]=dp[i]%mod;
}
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=(dp[arr[i]]%mod);
        sum = sum%mod;
    }
    cout<<sum<<endl;
}
return 0;
}