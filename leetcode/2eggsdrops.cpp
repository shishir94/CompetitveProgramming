#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int recursion(int n,int eggs){
//     if(eggs==1){
//         return n;
//     }
//     if(n==0){
//         return 0;
//     }
//     int a = INT_MAX;
//     for(int i=1;i<=n;i++){
//         int l = 1 + max(recursion(i-1,1),recursion(n-i,2));
//         if(l<a){
//             a=l;
//         }
//     }
//     return a;
// }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int dp[3][n+1];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<n+1;j++){
    //         dp[i][j]=-1;
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j = 0;j<n+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    int a =0;
    for(int i=1;i<n+1;i++){
        dp[1][i]=i;
    }
    for(int i=1;i<n+1;i++){
        if(i<2){
            dp[2][i]=dp[1][i];
        }
    }
    for(int j=2;j<3;j++){
        for(int i=2;i<n+1;i++){
            dp[j][i]=INT_MAX;
            for(int k=1;k<=i;k++){
                a = 1 + max(dp[j-1][k-1],dp[j][i-k]);
                if(a<dp[j][i]){
                    dp[j][i]=a;
                }
            }
        }
    }
    cout<<dp[2][n]<<endl;
}
return 0;
}