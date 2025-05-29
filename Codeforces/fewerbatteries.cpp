#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<long long, long long>>> g;
vector<long long> batteries;
long long N;

// important function how to get this ??
bool check(long long mid){
    vector<long long>dp(N,0);

    for(int i=0;i<N;i++){
        if(i>0 && dp[i] == 0) continue;
        dp[i] += batteries[i];
        dp[i]= min(dp[i],mid);

        for(auto &it:g[i]){
            if(it.second <= dp[i]){
                dp[it.first] = max(dp[it.first], dp[i]);
            }
        }
    }
    return dp[N-1]>0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        N = n;
        batteries.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> batteries[i];
        }

        g.assign(n, {});
        for (int i = 0; i < m; i++) {
            long long u, v, w;
            cin >> u >> v >> w;
            g[u - 1].push_back({v - 1, w});
        }   
        long long ans = -1;

        long long low = 0,high = 1e9;
        while(low <= high){
            long long mid = (low+high)/2;
            if(check(mid) == true){
                ans = mid;
                high = mid-1;
            }
            else low=mid+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
