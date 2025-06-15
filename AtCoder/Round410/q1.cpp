#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int x;
        cin>>x;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(x <= v[i]) cnt++;
        }

        cout<<cnt<<endl;
    return 0;
}