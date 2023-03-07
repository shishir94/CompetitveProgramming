#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<t<<" "
    unordered_map<long long,long long>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    long long ans =0;
    int i=0;
    int j=0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->first-1==i){
            if(itr->second<j){
                j=itr->second;
            }else{
                ans = ans+itr->second-j;
            }
            i++;
        }else{
            j=itr->second;
            ans=ans+itr->second;
            i=itr->first;
        }
    }
    cout<<ans<<endl;
}
return 0;
}