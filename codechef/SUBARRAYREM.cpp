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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    vector<int>v;
    vector<int>k;
    for(auto i=mp.begin();i!=mp.end();i++){
        v.push_back(i->first);
        k.push_back(i->second);
    }
    for(int i=0;i<v.size();i++){
        
    }
}
return 0;
}