#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n , k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }    
    int motu = 0;
    int tomu = 0;
    int x = n/2;
    int z = n-x;
    int arr1[x];
    int arr2[n-x];
    for(int i = 0;i<x;i++){
        arr1[i] = arr[2*i+1];
    }
    for(int i = 0;i<n-x;i++){
        arr2[i] = arr[2*i];
    }
    sort(arr1 , arr1+x);
    sort(arr2 , arr2+n-x);
    int i = 0;
    int j = n-x-1;
    int cnt = 0;
    while(i < x && j >= 0){
        if(cnt == k){
            break;
        }
        if(arr1[i] < arr2[j]){
            swap(arr1[i] , arr2[j]);
            cnt++;
            i++;
            j--;
        }else{
            break;
        }   
    }
    for(int i = 0;i<x;i++){
        tomu = tomu + arr1[i];
    }
    for(int i = 0;i<n-x;i++){
        motu = motu + arr2[i];
    }
    if(tomu > motu){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}    
return 0;
}