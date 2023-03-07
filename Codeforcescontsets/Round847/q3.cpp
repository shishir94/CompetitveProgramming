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
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>v;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i][0]]++;
    }
    int x =0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second==n-1){
            x=itr->first;
            break;
        }
    }
    int u=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]!=x)
        {
            u=i;
            break;
        }
    }
    v.push_back(x);
    for(int i=0;i<n-1;i++){
        v.push_back(arr[u][i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}