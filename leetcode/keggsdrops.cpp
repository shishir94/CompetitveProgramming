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
    int k;
    cin>>k;
    int dp[k+1][n+1];
    for(int i=0;i<k+1;i++){
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
    for(int j=2;j<=k;j++){
        for(int i=1;i<n+1;i++){
            if(j>i){
                dp[j][i]=dp[j-1][i];
            }else{
                dp[j][i]=INT_MAX;
                for(int l=1;l<=i;l++){
                    a = 1 + max(dp[j-1][l-1],dp[j][i-l]);
                    if(a<dp[j][i]){
                        dp[j][i]=a;
                    }
                }
            }
        }
    }
    for(int i=0;i<k+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[k][n]<<endl;
}
return 0;
}