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
    int arr[n];
    string s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;
    unordered_map<int,char>mp;
    bool p = true;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()&&mp[arr[i]]!=s[i]){
            p=false;
            break;
        }else{
            mp[arr[i]]=s[i];
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}