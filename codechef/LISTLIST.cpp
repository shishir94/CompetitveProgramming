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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    int ans = 0;
    for(auto itr = mp.begin();itr != mp.end();itr++){
        ans = max(ans,itr->second);
    }
    if(ans == n|| n == 1){
        cout<<"0"<<endl;
    }else if(ans == 1){
        cout<<"-1"<<endl;
    }else{
        cout<<n-ans+1<<endl;
    }
}
return 0;
}