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
    sort(s.begin(),s.end());
    // cout<<s<<endl;
    int g=s[n-1]-'a'+1;
    cout<<g<<endl;
}
return 0;
}