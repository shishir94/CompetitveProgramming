#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr[m];
    int arr1[n];
    for(int i  = 0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int x = arr[0];
    int y = arr[m-1];
    for(int i = 0;i<n;i++){
        arr[i] = max(abs(i-x),abs(i-y));
    }    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}