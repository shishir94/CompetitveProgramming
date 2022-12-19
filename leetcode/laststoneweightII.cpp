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
    int stones[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>stones[i];
        sum+=stones[i];
    }
    if(n==1){
        cout<<stones[0]<<endl;
    }else{
        vector<bool> dp(sum+1,false);
        int v = 0;
        dp[0]=true;
        dp[sum]=true;
        for(int i=0;i<n;i++){
            v = v+stones[i];
            for(int k=v;k>=0;k--){
                if(k >= stones[i]){
                    dp[k] = dp[k]|dp[k-stones[i]];
                }
                
            }
        }
        int ans = -1;
        for(int i=0;i<=sum/2;i++){
            if(dp[i]==true){
                ans = i;
            }
        }
        cout<<sum-2*ans<<endl;
    }
}
return 0;
}