#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lcs(string a,string b){
    int n = a.size();
    int m = b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1] == b[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int n = a.size();
    int m = b.size();
    vector<int>v;
    int ind = -1;
    for(int i=0;i<n;i++){
        if(a[i] == b[0]){
            ind =i;
            break;
        }
    }
    if(ind == -1) cout<<-1<<endl;
    else{
        string s ="";
        for(int i=ind;i<n;i++) s+=a[i];
        int len = lcs(s,b);
        if(abs(m-len) <= 1){
            cout<<ind<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
return 0;
}