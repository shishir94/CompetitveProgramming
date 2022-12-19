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
    int grid[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int sum = 0;
    if(n==0&&m==0){
        cout<<grid[0][0];
    }else if(n==0){
        for(int j=0;j<m;j++){
            sum += grid[0][j];
        }
    }else if(m==0){
        for(int i=0;i<n;i++){
           sum += grid[0][0];
        }
    }else{
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j] = min(dp[i][j-1],dp[i-1][j])+grid[i][j];
            }
        }
        cout<<dp[n-1][m-1]<<endl;
    }
}
return 0;
}