#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DSU {
public:
    vector<int> parent;
    vector<long long> sum;
    vector<int> size;

    DSU(int n) {
        parent.resize(n);
        sum.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;

        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        sum[a] += sum[b];
        size[a] += size[b];
    }
};

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> queries(n);
    for (int i = 0; i < n; ++i) {
        cin >> queries[i];
        --queries[i]; 
    }
    
    vector<long long> ans(n);
    vector<bool> active(n, false);
    DSU dsu(n);
    long long max_sum = 0;

    for (int i = n - 1; i >= 0; --i) {
        ans[i] = max_sum;
        int idx = queries[i];
        active[idx] = true;
        dsu.sum[idx] = a[idx]; 
        if (idx > 0 && active[idx - 1]) {
            dsu.unite(idx, idx - 1);
        }

        if (idx + 1 < n && active[idx + 1]) {
            dsu.unite(idx, idx + 1);
        }

        max_sum = max(max_sum, dsu.sum[dsu.find(idx)]);
        
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << '\n';
    }

    return 0;
}
