#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
long long dp[50][50];
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            dp[i][j]=0;
        }
    }
for(int i=0;i<50;i++){
    dp[i][0]=1;
}
for(int i=1;i<50;i++){
    for(int j=1;j<50;j++){
        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
    }
}

while(t--){
    int n;
    cin>>n;
    for(int j=0;j<50;j++){
        if(dp[n-1][j]!=0){
            cout<<dp[n-1][j]<<" ";
        }else{
            break;
        }
    }
    cout<<endl;
}
return 0;
}