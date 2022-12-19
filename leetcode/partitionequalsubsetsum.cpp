#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool possible(int n,int c,int arr[], int a,int sum ){
//     if(a==sum/2){
//         return true;
//     }else if(c==n){
//         return false;
//     }
//     bool f = possible(n,c+1,arr,a+arr[c],sum);
//     bool g = possible(n,c+1,arr,a,sum);
//     return f|g;
// }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0){
        cout<<false<<endl;
    }else{
        // cout<<possible(n,0,arr,0,sum)<<endl;
        int x = sum/2;
        bool dp[x+1][n+1];
        for(int j=0;j<=n;j++){
                dp[0][j]=true;
        }
        for(int i=1;i<=x;i++){
            dp[i][0]=false;
        }
        for(int i=1;i<=x;i++){
            for(int j= 1;j<=n;j++){
                dp[i][j]=dp[i][j-1];
                if(arr[j-1]<=i){
                    dp[i][j]=dp[i][j]||dp[i-arr[j-1]][j-1];
                }else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        cout<<dp[x][n]<<endl;
    }
}
return 0;
}