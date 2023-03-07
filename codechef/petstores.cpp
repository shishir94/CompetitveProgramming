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
    unordered_map<long long ,long long>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    bool c = true;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second%2!=0){
            c=false;
            break;
        }
    }
    if(c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}