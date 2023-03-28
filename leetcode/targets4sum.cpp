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
    cin>>n;int target;cin>>target;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(abs(target)>sum || (sum+target)%2==0){
        cout<<"0"<<endl;
    }else{
        sum = (sum+target)/2;
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                dp[i][j]=0;
            }
        }
        dp[0][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        cout<<dp[n][sum]<<endl;
    }
}
return 0;
}