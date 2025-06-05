#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> st;
    
    for (int i = 0; i < n; i++)
        st.insert(a[i]);

    cout<<st.size()<<endl;
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}