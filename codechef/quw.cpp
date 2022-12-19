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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]] = i;
    }
    map<int,int>mp1;
    for(int i=n-1;i>=0;i--){
        mp1[arr[i]] = i;
    }
    int ans = 0;
    int a = 0;
    int b = 0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        int x = itr->second-mp1[itr->first];
        if(ans<x){
            ans = x;
            b = itr->second;
            a = mp1[itr->first];
        }
    }
  //  cout<<a<<" "<<b<<endl;
    if(a==0&&b==n-1){
        cout<<"yes"<<endl;
    }else if(a==0){
        if(arr[b+1]==arr[n-1]){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }else if(b==n-1){
        if(arr[0]==arr[a-1]){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }else{
        cout<<"no"<<endl;
    }
}
return 0;
}