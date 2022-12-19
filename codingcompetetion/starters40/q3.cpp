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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    long long f = arr1[0];
    for(int i = 1;i<n;i++){
        f = (f & arr1[i]);
    }
    long long arr2[n];
    for(int i= 0;i<n;i++){
        arr2[i] = (arr[i] | f);
    }
    sort(arr2,arr2+n);
    sort(arr1,arr1+n);
    bool t = false;
    for(int i =0;i<n;i++){
        if(arr2[i] == arr1[i]){
            t = true;
        }else{
            t = false;
            break;
        }
    }
    if(t){
        cout<<f<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}