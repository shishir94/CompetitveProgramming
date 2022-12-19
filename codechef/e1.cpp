#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// USING RECURSION

// int blackpawns(int n, vector<vector<char>>v,int a , int b){
//     if(a>n-1||a<0||b>n-1||b<0){
//         return 0;
//     }
//     int f,g,h,j;
//     f=g=h=j=0;
//     f = blackpawns(n,v,a-2,b+1);
//     g = blackpawns(n,v,a-1,b+2);
//     h = blackpawns(n,v,a+1,b+2);
//     j = blackpawns(n,v,a+2,b+1);
//     if(v[b][a]=='P'){
//         return 1+max(f,max(g,max(h,j)));    
//     }else{
//         return max(f,max(g,max(h,j)));
//     }
// }


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int dp[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    int a = 0;
    int b = 0;
    vector<vector<char>>v;
    char l;
    for(int i=0;i<n;i++){
        vector<char>h;
        for(int j = 0;j<n;j++){
            cin>>l;
            h.push_back(l);
            if(l=='K'){
                a =i;
                b=j;
                dp[i][j]=0;
            }
        }
        v.push_back(h);
        h.clear();
    }
    // cout<<blackpawns(n,v,a,b)<<endl;  (Recursion part)

    // Using Dynamic Programming :: 
    for (int j=0;j<n;j++){
        for (int i=0;i<n;i++){
            if (i-2>=0 and j-1>=0 and dp[i-2][j-1]>=0){
                if (v[i][j]=='P')
                    dp[i][j] = max(dp[i][j],dp[i-2][j-1]+1);
                else
                    dp[i][j] = max(dp[i][j],dp[i-2][j-1]);
            }
            if (i-1>=0 and j-2>=0 and dp[i-1][j-2]>=0){
                if (v[i][j]=='P')
                    dp[i][j] = max(dp[i][j],1+dp[i-1][j-2]);
                else
                    dp[i][j] = max(dp[i][j],dp[i-1][j-2]);
            }
            if (i+1<n and j-2>=0 and dp[i+1][j-2]>=0){
                if (v[i][j]=='P')
                    dp[i][j] = max(1+dp[i+1][j-2],dp[i][j]);
                else
                    dp[i][j] = max(dp[i][j],dp[i+1][j-2]);
            }
            if (i+2<n and j-1>=0 and dp[i+2][j-1]>=0){
                if (v[i][j]=='P')
                    dp[i][j] = max(1+dp[i+2][j-1],dp[i][j]);
                else
                    dp[i][j] = max(dp[i][j],dp[i+2][j-1]);
            }
        }
    }   
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans = max(ans,dp[i][j]);
        }
    } 
    cout<<ans<<endl;
}
return 0;
}