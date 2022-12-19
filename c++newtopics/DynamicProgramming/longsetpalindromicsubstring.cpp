#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string palindrome(string s){
    if(s.size()==0){
        return "";
    }
    int n = s.size();
    int dp[n][n];
    memset(dp, -1, sizeof(dp));   // intializing all its elements to -1.
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    int first = 0;
    int l = 1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            first = i;
            l = 2;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j = i+k-1;
            if(dp[i+1][j-1]==1&&s[i]==s[j]){
                dp[i][j]=1;
                if(k>l){
                    first = i;
                    l = k;
                }
            }
        }
    }
    return s.substr(first,l);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    cout<<palindrome(s)<<endl;
}
return 0;
}