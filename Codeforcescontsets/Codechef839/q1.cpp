#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    // int s = s.size();
    cout<<(s[0]-'0')+(s[2]-'0')<<endl;
}
return 0;
}