#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, a, b;
    cin >> n >> a >> b;
 
    vector<long long> pre(n + 1, 0); 
 
    for (int i = 1; i <= n; i++) {
        cin >> pre[i];
        pre[i] += pre[i - 1];
    }
    multiset<long long> mt;
    long long ans = -1e15;
 
    for (long long i = a; i <= n; i++) {
        if (i > b) {
            mt.erase(mt.find(pre[i - b - 1]));
        }
        mt.insert(pre[i - a]);
        ans = max(ans, pre[i] - *mt.begin());
    }
 
    cout << ans << endl;
 
    return 0;
}