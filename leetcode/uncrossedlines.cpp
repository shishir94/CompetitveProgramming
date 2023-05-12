#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>nums1;
    vector<int>nums2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        nums2.push_back(y);
    }
    vector<vector<int>>dp(n,vector<int>(m,0));
    if(nums1[0]==nums2[0]){
        dp[0][0]=1;
    }
    for(int j=1;j<m;j++){
        if(dp[0][j-1]!=0){
            dp[0][j]=dp[0][j-1];
        }else{
            if(nums1[j]==nums2[0]){
                dp[0][j]=1;
            }
        }
    }
    for(int j=1;j<n;j++){
        if(dp[j-1][0]!=0){
            dp[j][0]=dp[j-1][0];
        }else{
            if(nums1[0]==nums2[j]){
                dp[j][0]=1;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(nums1[i]==nums2[j]){
                dp[i][j]=1+max(dp[i-1][j],dp[i][j-1]);
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;

}
return 0;
}