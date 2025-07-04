#include <bits/stdc++.h>
using namespace std;


void solve(vector<vector<int>>& ans, vector<int> arr, int ind) {
    if (ind == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for (int i = ind; i < arr.size(); i++) {
        swap(arr[ind], arr[i]);
        solve(ans, arr, ind + 1);
        swap(arr[ind], arr[i]);
    }
}

long long solve1(set<pair<int, int>>& st, int cut, vector<int>& l) {
    set<pair<int, int>> mt = st;
    long long temp = 0;
    int n = l.size();

    for (int i = 1; i < cut; i++) {
        int u = min(l[i], l[i - 1]);
        int v = max(l[i], l[i - 1]);
        if (mt.find({u, v}) == mt.end()) temp++;
        else mt.erase({u, v});
    }
    {
        int u = min(l[0], l[cut - 1]);
        int v = max(l[0], l[cut - 1]);
        if (mt.find({u, v}) == mt.end()) temp++;
        else mt.erase({u, v});
    }

    for (int i = cut + 1; i < n; i++) {
        int u = min(l[i], l[i - 1]);
        int v = max(l[i], l[i - 1]);
        if (mt.find({u, v}) == mt.end()) temp++;
        else mt.erase({u, v});
    }
    if (cut < n) {
        int u = min(l[cut], l[n - 1]);
        int v = max(l[cut], l[n - 1]);
        if (mt.find({u, v}) == mt.end()) temp++;
        else mt.erase({u, v});
    }

    temp += mt.size();  
    return temp;
}

int main() {
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> st;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v);
        st.insert({u, v});
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;

    vector<vector<int>> ans;
    solve(ans, arr, 0);

    long long res = INT_MAX;

    for (auto& l : ans) {
        if (n <= 5) {
            res = min(res, solve1(st, l.size(), l));
        } else if (n == 6) {
            res = min(res, solve1(st, 6, l)); 
            res = min(res, solve1(st, 3, l)); 
        } else if (n == 7) {
            res = min(res, solve1(st, 7, l)); 
            res = min(res, solve1(st, 3, l)); 
            res = min(res, solve1(st, 4, l)); 
        } else if (n == 8) {
            res = min(res, solve1(st, 8, l)); 
            res = min(res, solve1(st, 3, l)); 
            res = min(res, solve1(st, 4, l)); 
            res = min(res, solve1(st, 5, l)); 
        }
    }

    cout << res << endl;
    return 0;
}
