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
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    map<long long , long long>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    long long d = 1000000007;
    long long x =1;
    vector<long long>v;
    for(auto itr =mp.begin();itr!=mp.end();itr++){
        x=(x*(itr->second))%d;
        v.push_back(x%d);
    }
    long long ans =0;
    long long h =1;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(h==itr->first){
            ans = ans+v[h-1]%d;
            ans=ans%d;
            h++;
        }
    }
    cout<<ans<<endl;
}   
return 0;
}