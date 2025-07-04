#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++) cin>>h[i];

    if(n == 1) {
        cout<<"0"<<endl;
    }
    else{
        vector<int>dp(n,INT_MAX);
        dp[0] = 0;
        
        for(int i=0;i<n;i++){
            int st = i+1;
            int end = min(i+k+1,n);

            while(st < end){
                dp[st] = min(dp[st],dp[i]+abs(h[i]-h[st]));
                st++;
            }
        }

        cout<<dp[n-1]<<endl;
    }
    return 0;
}