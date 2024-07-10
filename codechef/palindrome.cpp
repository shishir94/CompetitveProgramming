#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>> fun(string& s){
    int n = s.size();
    vector<vector<bool>>dp(n,vector<bool>(n,0));
    for(int i=0;i<n;i++) dp[i][i] = true;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            dp[i][i+1]=true;
        }
    }

    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(s[i] == s[j] && dp[i+1][j-1] == true){
                dp[i][j]= true;
            }
        }
    }
    return dp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        vector<vector<bool>>dp = fun(s);
        int count =0;
        vector<int>left(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(dp[j][i] == 1) count++;
            }
            left[i]=count;
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        string p = s;
        reverse(p.begin(),p.end());
        vector<vector<bool>>dp1 = fun(p);
        count =0;
        vector<int>right(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp1[j][i] == 1) count++;
            }
            right[n-i-1]=count;
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp1[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;


        // cout<<"left array"<<endl;
        // for(int i=0;i<n;i++) cout<<left[i]<<" ";
        // cout<<endl;
        // cout<<"right array"<<endl;
        // for(int i=0;i<n;i++) cout<<right[i]<<" ";
        // cout<<endl;
        
        int ans = 0;
        for(int i=1;i<n-1;i++){
            for(int j=i;j<n-1;j++){
                if(dp[i][j]==1) ans += (left[i-1])*(right[j+1]);
            }
        }
        cout<<ans<<endl;
    }
}