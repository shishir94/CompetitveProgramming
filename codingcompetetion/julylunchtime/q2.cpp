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
    unordered_map<char,int>mp;
    for(int i = 0;i<n;i++){
        if(i % 2 == 0){
            char key = s[i];
            mp[key]++;
        }
    }
    unordered_map<char,int>p;
    for(int i = 0;i<n;i++){
        if(i %2!= 0){
            char key = s[i];
            p[key]++;
        }
    }
    bool t = true;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        if(itr->second != p[itr->first]){
            t = false;
            break;
        }else{
            t = true;
        }
    }
    if(t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}