#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int lps(int n , int arr[],int dp[]){
//     int a =1 ;
//     int b = INT_MIN;
//     for(int i=0;i<n;i++){
//         a = a*arr[i];
//         if(b<a){
//             b =a;
//         }
//         if(a==0 ||(arr[i]<0 && dp[i] != 0 && (dp[i]-1)%2 != 0)){
//             a=1;
//         }
//     }
//     return b;

// }
int lps(int n,int arr[]){
    int a = 1;
    int b =1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(a,b);
        }
        a = max(arr[i],a*arr[i]);
        b = min(arr[i]*b,arr[i]);
        ans = max(a,ans);
    }

    return ans;
}


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
    // int dp[n];
    // if(arr[n-1]<0){
    //     dp[n-1]=1;
    // }else{
    //     dp[n-1]=0;
    // }
    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]<0){
    //         dp[i] = 1+dp[i+1];
    //     }else{
    //         dp[i]=dp[i+1];
    //     }   
    // }
    // int dp[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             dp[i][j]=arr[i];
    //         }
    //         if(i>j){
    //             dp[i][j]=0;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<n;j++){
    //         if(i!=j&&i<j){
    //             dp[i][j]=dp[i][j-1]*arr[j];
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // int ans = INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         ans = max(ans,dp[i][j]);
    //     }
    // }
    // cout<<ans<<endl;
}
return 0;
}