#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>v;
    int h = 0;
    bool c = true;
    string ans = "";
    while(h<k){
        string f = s;
        for(int i = 0;i<n;i++){
            if(f[i]=='1'){
                v.push_back(i);
            }
        }
        for(int i = 0;i<v.size();i++){
            s[v[i]]='0';
            if(v[i]!=0 &&f[v[i]-1]=='0'){
                s[v[i]-1]='1';
            }
            if(v[i]!=n-1&&f[v[i]+1]=='0'){
                s[v[i]+1]='1';
            }
        }
        v.clear();
        h++;
    }
    cout<<s<<endl;
}
return 0;
}
