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
    string s;
    cin>>s;
    string r =s;
    string h = s;
    reverse(h.begin(),h.end());
    int n=r.size();
    int m = h.size();
    vector <vector <int>> dp(n + 1, vector <int> (m + 1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(r[i-1]==h[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }   
    }
    int ans = 0;
    for(int i=0;i<=n;i++){
        ans = max(ans,dp[i][m-i]);
    }
    cout<<ans<<endl;
}
return 0;
}