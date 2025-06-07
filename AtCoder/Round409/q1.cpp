#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    int c1 = 0,c2 = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == 'o'  && s2[i] == 'o') c1++;
        
    }

    if(c1>0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}