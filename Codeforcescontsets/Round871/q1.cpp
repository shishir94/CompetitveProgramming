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
    int cnt =0;
    string d = "codeforces";
    for(int i=0;i<s.size();i++){
        if(s[i]!=d[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}