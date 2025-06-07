#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]) {
                swap(s[i],s[i+1]);
                c=1;
            }
            else if(s[i]<s[i+1]){
                if(c == 1) break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}