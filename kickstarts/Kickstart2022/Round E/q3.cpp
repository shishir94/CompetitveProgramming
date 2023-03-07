#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s, int starting){
    if(s.size()==1){
        return true;
    }
    for(int i = starting;i<s.size()/2;i++){
        if(s[i] != s[s.size()-1-i]){
            return false;
            break;
        }
    }
    return true;
}
int count(int index,string s){
    if(check(s,index)){
        return 0;
    }
    return 1 + check(s,index+1);
}

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
    int ans = count(0,s);
    string h = s.substr(0,ans);
    cout<<h<<endl;
}
return 0;
}