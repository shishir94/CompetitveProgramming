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
    vector<int>v;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
        v.push_back(arr1[i]);
    }
    unordered_map<int,int>mp;
    for(int i = 0;i<v.size();i++){
        mp[v[i]]++;
    }
    int sum = 0;
    for(auto itr = mp.begin();itr != mp.end();itr++){
        if(itr->second == 1){
            sum += itr->first;
        }
    }
    cout<<sum<<endl;
}
return 0;
}