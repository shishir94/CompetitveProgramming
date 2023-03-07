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
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(arr[i]!=v[n-1]){
            cout<<(arr[i]-v[n-1])<<" ";
        }else{
            cout<<(arr[i]-v[n-2])<<" ";
        }
    }
    cout<<endl;
}
return 0;
}