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
    long long dp[49][49]={0};
    for(int i=0;i<n;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        dp[a][b]=max(dp[a][b],c);
    }
    for(int i=1;i<49;i++){
        for(int j=1;j<49;j++){
            long long v = 0;
            int h = j;
            for(int k=0;k<i;k++){
                v = max(v,dp[k][h-1]);
            }
            long long g = max(dp[i][j-1],dp[i-1][j]);
            dp[i][j] = max(g,dp[i][j]+v);
        }
    }
    for(int i=0;i<49;i++){
        for(int j=0;j<49;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<dp[48][48]<<endl;
}
return 0;
}