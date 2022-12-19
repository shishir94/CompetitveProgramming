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
    int ans = INT_MIN;
    int x = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        ans = max(ans,arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==ans){
            x = i;
        }
    }
 //   cout<<x<<endl;
    if(n==1 || x == 0){
        cout<<"-1"<<endl;
    }else{
        cout<<x<<endl;
        for(int i = 0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<(n-x)<<endl;
        for(int i = x;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}
return 0;
}