#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>h(n);
    for(int i=0;i<n;i++) cin>>h[i];

    if(n == 1) {
        cout<<"0"<<endl;
    }
    else{
        vector<int>dp(n);
        dp[0] = 0;
        dp[1] = abs(h[0]-h[1]);

        for(int i=2;i<n;i++){
            dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
        }

        cout<<dp[n-1]<<endl;
    }
    return 0;
}