#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int d = k+1;
    if(k+1 >= n){
        cout<<arr[n-1]<<endl;
    }else{
        cout<<arr[k]<<endl;
    }
}
return 0;
}