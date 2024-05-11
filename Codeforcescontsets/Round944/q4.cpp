#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans =0,ans1=0;
        int n = s.size();
            for(int i = 0 ; i < n-1 ; i++) {
        if(s[i] != s[i+1])ans++;
        if(s[i] == '0' && s[i+1] == '1') ans1++;
    } 
 
        if(ans1 > 0) cout<<ans<<"\n";
        else cout<<ans+1<<"\n";
    }

    return 0;
}
