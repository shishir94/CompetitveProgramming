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
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=1;
    }
    long long ans = 0;
    sort(arr,arr+n);
    for(auto i:arr){
        if(mp[i+1]||mp[i-1]){
            continue;
        }else{
            ans++;
            mp[i+1]=1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}