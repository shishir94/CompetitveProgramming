#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(int i,int j,string s){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

// RECURSION CODE ::
int f(string s,int i,int n,vector<int> &dp){
    if(i==n){
        return 0;
    }
    if(dp[i]!=-1){   // memoiztion statement.
        return dp[i];
    }
    int mincost=INT_MAX;
    for(int j=i;j<n;j++){
        if(ispalindrome(i,j,s)){
            int cost = 1+f(s,j+1,n,dp); 
            mincost=min(cost,mincost);
        }
    }
  //  return mincost; ---> recursion code statement.
    return dp[i]=mincost;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    // vector<int>dp(s.size(),-1);
    bool pal[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pal[i][j]=false;
        }
    }
    for(int i=0;i<n;i++){
        pal[i][i]=true;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            pal[i][i+1]=true;
        }
    }
    for (int l=3; l<n+1;l++){
        for (int i=0;i<n-l+1;i++){
            int j = i+l-1;
            if (s[i] == s[j] && pal[i+1][j-1]){
                pal[i][j] = true;
            }
        }
    }

    vector<int>dp(s.size()+1,0);
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
        int mincost=INT_MAX;
        for(int j=i;j<n;j++){
            if(ispalindrome(i,j,s)){    // phele is hi store karna padega ki konsi substring palindromic h!!
                int cost = 1+dp[j+1];
                mincost=min(cost,mincost);
            }
        }
        dp[i]=mincost;
    }
    // cout<<f(s,0,s.size(),dp)-1<<endl;
    cout<<dp[0]-1<<endl;
}
return 0;
}