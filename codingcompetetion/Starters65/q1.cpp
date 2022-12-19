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
    long long arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    unordered_map<long long,long long>mp;
    for(int i=0;i<2*n;i++){
        int key = arr[i];
        mp[key]++;
    }
    bool p = true;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second>2){
            p = false;
            break;
        }else{
            p = true;
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}