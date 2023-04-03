#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s1,s2;
    cin>>s1>>s2;
        int x = s1.size();
        int y = s2.size();
        vector<vector<bool>>dp(y+1,vector<bool>(x+1,false));
        dp[0][0]=true;
        if(s2[0]=='*'){
            dp[1][0]=true;
        }
        for(int i=0;i<s2.size()&&s2[i]=='*';i++){
            dp[i+1][0]=true;
        }
        for(int i=1;i<=y;i++){
            for(int j=1;j<=x;j++){
                if(s1[j-1]==s2[i-1]|| s2[i-1]=='?'){
                    dp[i][j] = dp[i-1][j-1];
                }else if(s2[i-1]=='*'){
                    dp[i][j]=(dp[i-1][j]||dp[i][j-1]);
                }
            }
        }
    for(int i=0;i<=y;i++){
        for(int j=0;j<=x;j++){
            cout<<dp[i][j]<<" ";
            
        }
        cout<<endl;
    }
    // cout<<endl;
    cout<<dp[y][x]<<endl;
}
return 0;
}