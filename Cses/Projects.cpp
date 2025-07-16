#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> dp;

long long solve(int ind, vector<vector<long long>>& v, vector<long long>& start) {
    if (ind >= v.size()) return 0;

    if (dp[ind] != -1) return dp[ind];

    int nextIndex = upper_bound(start.begin(), start.end(), v[ind][1]) - start.begin();

    long long notTake = solve(ind + 1, v, start);
    long long take = v[ind][2];
    if (nextIndex < v.size()) {
        take += solve(nextIndex, v, start);
    }

    return dp[ind] = max(take, notTake);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<vector<long long>> v(n, vector<long long>(3));
    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2]; 
    }

    sort(v.begin(), v.end());

    vector<long long> start(n);
    for (int i = 0; i < n; i++) {
        start[i] = v[i][0];
    }

    dp.resize(n, -1);

    cout << solve(0, v, start) << endl;

    return 0;
}
