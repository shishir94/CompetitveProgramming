#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dp[n-1];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    // cout<<dp[0]<<" "<<dp[1]<<endl;
    for(int i=2;i<n-1;i++){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    int x = dp[n-2];
    // cout<<"1"<<endl;
    // cout<<x<<endl;
    int dp1[n-1];
    dp1[0]=arr[1];
    dp1[1]=max(arr[1],arr[2]);
    for(int i=2;i<n-1;i++){
        dp1[i]=max(dp1[i-1],dp1[i-2]+arr[i+1]);
    }
    int y = dp1[n-2];
    // cout<<y<<endl;
    cout<<max(x,y)<<endl;
}
return 0;
}