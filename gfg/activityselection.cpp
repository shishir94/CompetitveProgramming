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
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr1[i],arr[i]));
    }
    sort(v.begin(),v.end());
    map<int,int>mp;
    mp[v[0].second]=v[0].first;
    int x =v[0].first;
    for(int i=1;i<v.size();i++){
        if(v[i].second > x){
            mp[v[i].second]=v[i].first;
            x=v[i].first;
        }
    }
    cout<<mp.size()<<endl;
}
return 0;
}