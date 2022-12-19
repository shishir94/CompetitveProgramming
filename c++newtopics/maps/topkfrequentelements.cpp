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
    int k;
    cin>>k;
    int nums[n];
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int key = nums[i];
        mp[key]++;
    }
    vector<pair<int,int>>v;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        v.push_back(make_pair(itr->second,itr->first));
    }
    sort(v.begin(), v.end());
    vector<int>v1;
    int cnt = 0;
    for(int i=v.size()-1;i>=0;i--){
        v1.push_back(v[i].second);
        cnt++;
        if(cnt == k){
            break;
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
}
return 0;
}