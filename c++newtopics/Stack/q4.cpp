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
    int nums1[n];
    int nums2[m];
    for(int i = 0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i = 0;i<m;i++){
        cin>>nums2[i];
    }
    stack<int>s;
    map<int,int>mp;
    for(int i = 0;i<m;i++){
        if(!s.empty() && nums1[s.top()]<nums2[i]){
            mp[s.top()] = nums2[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        mp[s.top()]=-1;
        s.pop();
    }
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        cout<<itr->second<<" ";
    }
}
return 0;
}