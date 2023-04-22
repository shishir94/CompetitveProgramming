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
    long long arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    long long x =-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            x=i;
            break;
        }
    }
    long long h =-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr1[i]){
            h=i;
            break;
        }
    }
    // cout<<x<<" "<<h<<endl;
    for(int i=h+1;i<n;i++){
        if(arr1[h]<=arr1[i] && arr1[i]==arr[i]){
            h=i;
        }else{
            break;
        }
    }
    // cout<<h<<endl;
    for(int i=x-1;i>=0;i--){
        if(arr1[x]>=arr1[i] && arr1[i]==arr[i]){
            x=i;
        }else{
            break;
        }
    }
    cout<<x+1<<" "<<h+1<<endl;
}
return 0;
}