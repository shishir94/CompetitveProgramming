// Similar to LCS(Longest Common Subsequence ) problem.
/*
We can to three operations either insert,delete,replace.
We will start from last character of both the string if the last charcters of both the string are same we have to do northing.
And if these charcters are different we have to either replace or delete that character from string 1.

Lets take an example ::
String 1 = DOG;
String 2 = DIG;
As last charcter of both the strings are same then both string becomes (DO , DI) Now O and I are different
We can do three operations from this we get three different pairs of string 1 and string 2;
1). Insert ----> (DOI,DI)---> (DO,D);
2). Delete ----> (D,DI);
3).Replace --->  (DI,DI)--> (D,D)
This is recursive solution.
*/

// DP Solution 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string word1,word2;
    cin>>word1>>word2;
    int m= word1.size();
    int n=word2.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        dp[i][0]=i;
    }
    for(int j=0;j<=n;j++){
        dp[0][j]=j;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(word1[i-1]==word2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]= 1 + min(dp[i-1][j-1], min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    cout<<dp[m][n]<<endl;
}
return 0;
}