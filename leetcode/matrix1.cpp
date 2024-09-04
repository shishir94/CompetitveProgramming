#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<vector<long long>> mat(n, vector<long long>(m));
    vector<pair<long long, long long>> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            arr.push_back({mat[i][j], j});
        }
    }

    sort(arr.begin(), arr.end());

    long long i = 0, j = 0;
    long long ans = LLONG_MAX;
    unordered_map<long long, long long> mp;

    while(j < arr.size()){
        mp[arr[j].second]++;
        while(i <= j && mp.size() == m){
            ans = min(ans, arr[j].first - arr[i].first);
            mp[arr[i].second]--;
            if(mp[arr[i].second] == 0) mp.erase(arr[i].second);
            i++;
        }
        j++;
    }

    cout << ans << endl;
    return 0;
}
