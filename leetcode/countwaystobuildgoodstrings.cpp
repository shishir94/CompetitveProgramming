#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int low,high,zero,one;
    cin>>low>>high>>zero>>one;
    vector<int>dp(high+1,0);
    dp[0]=1;
    for(int i=0;i<high;i++){
        if(i+zero<=high){
            dp[i+zero]=(dp[i+zero]+dp[i])%(1000000007);
        }
        if(i+one<=high){
            dp[i+one]=(dp[i+one]+dp[i])%(1000000007);
        }
    }
    int sum = 0;
    for(int i=low;i<=high;i++){
        sum = (sum+dp[i]);
        sum = sum%1000000007;
    }
    cout<<sum<<endl;
}
return 0;
}