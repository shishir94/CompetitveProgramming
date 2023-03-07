#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>dp(n,0);
    unordered_map<long long,long long>m1;
    unordered_map<long long,long long>m2;
    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            dp[i]=0;
        }else{
            dp[i]=dp[i+1];
        }
        dp[i]+=m1[arr[i]+1];
        dp[i]-=m2[arr[i]-1];
        m2[arr[i]]++;
        m1[arr[i]]--;
    }
    long long ans =0;
    for(int i=0;i<n;i++){
        ans = max(ans,dp[i]);
    }
    if(ans<0){
        cout<<"0"<<endl;
    }else{
        cout<<ans<<endl;
    }
}
return 0;
}