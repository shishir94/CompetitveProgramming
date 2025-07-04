#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        long long ans = 2;
        long long last = v[0];

        multiset<long long> st;
        for(int i = 1; i < n - 1; i++) {
            st.insert(v[i]);
        }

        bool ok = true;
        while(last * 2 < v[n - 1]){
            long long val = last * 2;
            auto it = st.upper_bound(val);

            if(it == st.begin()) {
                cout << "-1" << endl;
                ok = false;
                break;
            }

            --it;
            last = *it;
            st.erase(st.find(*it));
            ans++;
        }

        if(ok) cout << ans << endl;
    }

    return 0;
}
