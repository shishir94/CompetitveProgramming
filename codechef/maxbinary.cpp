#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    if(s[0]!='1'){
        s[0]='1';
        m--;
    }
    // for(int i=0;i<m;i++){
    //     s=s+'0';
    // }
    // cout<<s<<endl;
    while(m--){
        s.push_back('0');
    }
    cout<<s<<endl;
}
return 0;
}