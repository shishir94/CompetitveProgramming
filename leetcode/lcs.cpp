#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursion Solution.
// int lcs(string text1,string text2,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(text1[n-1]==text2[m-1]){
//         return 1+lcs(text1,text2,n-1,m-1);
//     }
//     return max(lcs(text1,text2,n-1,m),lcs(text1,text2,n,m-1));
// }


// Dynamic programming :-
int lcs(string a , string b,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }else if(a[i-1]==b[j-1]){
                dp[i][j]= dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string text1,text2;
    cin>>text1>>text2;
    int n= text1.size();
    int m = text2.size();
    cout<<lcs(text1,text2,n,m)<<endl;
}
return 0;
}