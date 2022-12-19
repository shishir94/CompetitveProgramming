#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    arr1[n-1] = 1;
    for(int i = n-2;i>=0;i--){
        if((arr[i] >0 && arr[i+1] < 0) ||(arr[i] < 0 && arr[i+1] > 0) ){
            arr1[i] = arr1[i+1] + 1; 
        }else{
            arr1[i] = 1;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
return 0;
}