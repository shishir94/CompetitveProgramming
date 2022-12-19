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
    int B;
    cin>>B;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int dp[n][n];
    dp[0][0]=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0&&j==0){
                dp[i][j]=arr[0][0];
            }else if(i==0){
                dp[i][j]=arr[i][j]+dp[i][j-1];
            }else if(j==0){
                dp[i][j] = arr[i][j]+dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+arr[i][j];
            }
        }
    }
    int ans = INT_MIN;
    for(int i=B-1;i<n;i++){
        for(int j=B-1;j<n;j++){
            int val = 0;
            if((i-B+1)==(j-B+1)&&(i-B+1)==0){
                 val = dp[B-1][B-1];
            }else if((i-B+1)==0){
                val = dp[i][j]-dp[i][j-B];
            }else if((j-B+1)==0){
                 val = dp[i][j]-dp[i-B][j];
            }else{
                 val = dp[i][j]-dp[i][j-B]-dp[i-B][j]+dp[i-B][j-B];
            }
            ans = max(ans,val);
        }
    }
    cout<<ans<<endl;
}

return 0;
}