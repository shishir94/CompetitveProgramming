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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"0"<<endl;
    }else{
        long long arr1[n/2];
        for(int i = 0;i<n/2;i++){
            arr1[i]= arr[n-1-i]-arr[i];
        }
        bool f = true;
        for(int i = 0;i<n/2;i++){
            if(arr1[i]<0){
                f = false;
                break;
            }
        }
        for(int i = 0;i<n/2-1;i++){
            if(arr1[i]<arr1[i+1]){
                f = false;
                break;
            }else{
                f = true;
            }
        }
        if(f){
            cout<<arr1[0]<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
return 0;
}