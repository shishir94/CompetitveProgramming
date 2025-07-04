#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int h,w;
    cin>>h>>w;

    vector<vector<char>>v(h,vector<char>(w));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char x;
            cin>>x;
            v[i][j] = x;
        }
    }

    int mod = 1e9+7;
    vector<vector<int>>dp(h,vector<int>(w,0));
    if(v[0][0] == '#' || v[h-1][w-1] == '#'){
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<h;i++){
            if(v[i][0] == '.') dp[i][0] = 1;
            else break;
        }

        for(int i=0;i<w;i++){
            if(v[0][i] == '.') dp[0][i] = 1;
            else break;
        }

        for(int i=1;i<h;i++){
            for(int j=1;j<w;j++){
                if(v[i][j] == '#') continue;
                dp[i][j] = (dp[i-1][j] % mod+ dp[i][j-1] % mod)%mod;
            }
        }
        cout<<(dp[h-1][w-1]%mod)<<endl;
    }
    return 0;
}
