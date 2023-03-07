#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n*k*(logn))    // for nested loop and binary search
// Space Complexity = O(n*k)  // For 2-d array

int superEggDrop(int k, int n) {
    if(n==0||n==1){   // Base Case when number of floors are 0 --> attempts = 0
        return n;      // when number of floors is 1 ---> attempts = 1;
    }
    if(k==1){      // if number of eggs are 1, we have to check each and every floor so number
        return n;      // of attempts are equal to number of floors.
    }
    vector<vector<int>>dp(k+1,vector<int>(n+1,0));
    for(int i=0;i<=k;i++){
        dp[i][0]=0; // filling of base case when number of floors are either 0 or 1.
        dp[i][1]=1;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=0; // filling of base case when number of eggs are either 0 or 1.
        dp[1][i]=i;
    }
    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            int l=1;
            int h =j,temp=0,ans=100000;
            while(l<=h){
                int mid = (l+h)/2;
                int left = dp[i-1][mid-1]; // egg breaks 
                int right= dp[i][j-mid];  // eggs survive
                temp = 1+max(left,right);
                if(left<right){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
                ans = min(ans,temp);  // storing the minimum number of attempts.
            }
            dp[i][j]=ans;
        }
    }
    return dp[k][n];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int k,n;
    cin>>k>>n; // k = number of eggs and n = number of floors
    cout<<superEggDrop(k,n)<<endl;
}
return 0;
}