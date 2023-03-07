#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>s2;
    unordered_set<char>s1;
    vector<int>v;

    for(int i=0;i<n;i++){
        s2.insert(s[i]);
        v.push_back(s2.size());
    }
    vector<int>m;
    for(int i=n-1;i>=0;i--){
        s1.insert(s[i]);
        m.push_back(s1.size());
    }
    int sum=0;
    int ans =0;
    for(int i=0;i<v.size()-1;i++){
        sum = v[i]+m[n-2-i];
        ans = max(ans,sum);
    }
    ans = max(ans,v[n-1]);
    cout<<ans<<endl;
}
return 0;
}