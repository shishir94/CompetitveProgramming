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
    sort(arr,arr+n);
    int ans = INT_MIN;
    unordered_map<int,int>map;
    for(int i = 0;i<n;i++){
        map[arr[i]]++;
    }
    int ans1;
    int cnt = 0;
    for(auto x : map){
        if(x.second > ans){
            ans = x.second;
            ans1 = x.first;
        }
    }
    bool t = true;
    for(auto x : map){
        if(x.second == ans && x.first != ans1){
            t = false;
            break;
        }else{
            t = true;
        }
    }
    if(t){
        cout<<ans1<<endl;
    }else{
        cout<<"CONFUSED"<<endl;
    }
}
return 0;
}