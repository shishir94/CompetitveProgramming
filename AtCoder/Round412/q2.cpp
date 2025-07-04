#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    set<char> st;
    for (char ch : t) {
        st.insert(ch);
    }

    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i]) && st.find(s[i - 1]) == st.end()) {
            cout << "No" << endl;
            return 0; 
        }
    }

    cout << "Yes" << endl;
    return 0;
}
