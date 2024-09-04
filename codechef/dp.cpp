#include <bits/stdc++.h>
using namespace std;
 
 
bool isSubMask(int a,int b){
    return (a | b) == b;
}
int solve(int N, int K, vector<int> A){
    int n = N, k = K;
    vector<int> pre(130, -1), suf(130, -1);
    vector<int> dp(128, 1e9), cnt(128, 0);
 
    for(int i = 0; i < n; ++i){
        dp[A[i]] = 1;
        for(int mask = 0; mask < 128; ++mask){
            dp[mask | A[i]] = min(dp[mask | A[i]], 1 + dp[mask]);
            if(isSubMask(A[i], mask)) cnt[mask]++;
        }
 
        for(int mask = 0; mask < 128; ++mask){
            if(dp[mask] <= k && cnt[mask] >= k && pre[mask] == -1){
                pre[mask] = i;
            }
        }
    }

    for(int i=0;i<pre.size();i++) cout<<pre[i]<<" ";
 
    dp.assign(128, 1e9); cnt.assign(128, 0);
    for(int i = n - 1; i >= 0; --i){
        dp[A[i]] = 1;
        for(int mask = 0; mask < 128; ++mask){
            dp[mask | A[i]] = min(dp[mask | A[i]], 1 + dp[mask]);
            if(isSubMask(A[i], mask)) cnt[mask]++;
        }
 
        for(int mask = 0; mask < 128; ++mask){
            if(dp[mask] <= k && cnt[mask] >= k && suf[mask] == -1){
                suf[mask] = i;
            }
        }
    }
    int ans = 0;
    for(int mask = 127; mask >= 0; --mask){
        for(int l = 127; l >= 0; --l){
            int r = mask ^ l;
            if(pre[l] == -1 || suf[r] == -1) continue;
            if(pre[l] < suf[r]){
                return mask;
            }
        }
    }
    return 0;
}
 
int main(){
    vector<int> v = {2,4,5};
    cout<<solve(3, 1, v)<<endl;;
    return 0;
}


    