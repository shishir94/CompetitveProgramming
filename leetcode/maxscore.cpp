#include<bits/stdc++.h>
using namespace std;

void solve(vector<long long> &left, vector<long long> &right, vector<long long> &v) {
    int n = left.size();
    stack<long long> right_find, left_find;

    for (int i = 0; i < n; i++) {
        if (right_find.empty()) right_find.push(i);
        else {
            while (!right_find.empty() && v[i] < v[right_find.top()]) {
                right[right_find.top()] = i;
                right_find.pop();
            }
            right_find.push(i);
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (left_find.empty()) left_find.push(i);
        else {
            while (!left_find.empty() && v[i] < v[left_find.top()]) {
                left[left_find.top()] = i;
                left_find.pop();
            }
            left_find.push(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<long long> val(26);
        for (int i = 0; i < 26; i++) cin >> val[i];

        long long n = s.size();
        vector<long long> v(n);
        vector<long long> pre(n);

        for (int i = 0; i < n; i++) {
            long long ind = (s[i] - 'a');
            v[i] = ind+1;
            pre[i] = val[ind];
        }

        for (int i = 1; i < n; i++) {
            pre[i] += pre[i - 1];
        }

        vector<long long> left(n, -1), right(n, n);
        solve(left, right, v);

        for(int i=0;i<n;i++) cout<<left[i]<<" ";
        cout<<endl;

        for(int i=0;i<n;i++) cout<<right[i]<<" ";
        cout<<endl;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long left_ind = left[i] + 1;
            long long right_ind = right[i] - 1;

            long long sum = (left_ind == 0) ? pre[right_ind] : pre[right_ind] - pre[left_ind - 1];
            ans = max(ans, sum * v[i]);
        }

        cout << ans << endl;
    }
    return 0;
}
