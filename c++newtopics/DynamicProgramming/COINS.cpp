#include<iostream>
#include<bits/stdc++.h>
using namespace std;

map<long long,long long>dp;
long long fun(long long n){
    if(n<12)
        return n;
    if(dp[n])
        return dp[n];
    else if(dp[n]==0)
        return dp[n] = max(dp[n],(fun(n/2)+fun(n/3)+fun(n/4)));
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
while(cin>>t)
    cout<<fun(t)<<endl;
return 0;
}