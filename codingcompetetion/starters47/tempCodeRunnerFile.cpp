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
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<long long,long long>mp;
    for(int i =0;i<n;i++){
        long long key = arr[i];
        mp[key]++;
    }
    long long ans = 0;
    for(int i = 0;i<n;i++){
        ans = max(ans,arr[i]);
    }
    long long v = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == ans){
            v++;
        }
    }
    long long cnt = 0;
    long long x = 0;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        x = max(x,itr->second);
        if(itr->second == 1){
            cnt++;
        }
    }
    if(v == 1 && cnt == 1){
        if(x>2){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }else{
        if(cnt == 0){
            cout<<"0"<<endl;
        }else{
            if(cnt%2==0){
                cout<<cnt/2<<endl;
            }else{
                cout<<cnt/2+1<<endl;
            }
        }
    }
}
return 0;
}