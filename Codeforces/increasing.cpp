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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    bool y = true;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second>1){
            y = false;
            break;
        }
    }
    if(y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}