#include <iostream>
#include <vector>
using namespace std;

vector<int> temp;
vector<vector<int>> g;

int dfs(int node, int parent) {
    temp[node] = 1;  
    for (auto it : g[node]) {
        if (it != parent) {
            temp[node] += dfs(it, node);
        }
    }
    return temp[node];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    temp.resize(n);
    g.resize(n);

    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        g[i + 1].push_back(v[i] - 1);
        g[v[i] - 1].push_back(i + 1);
    }

    dfs(0, -1);  

    for (int i = 0; i < n; i++) {
        cout << temp[i]-1 << " ";
    }
    cout << "\n";

    return 0;
}
