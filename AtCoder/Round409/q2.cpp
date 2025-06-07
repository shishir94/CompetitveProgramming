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

    sort(v.begin(),v.end());
    int ans = -1;
    for(int i=0;i<=100;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(v[j]>=i) count++;
        }

        if(count >= i) ans = i;
    }
    cout<<ans<<endl;
    return 0;
}