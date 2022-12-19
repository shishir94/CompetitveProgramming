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
    int d = (n+1)/2;
    sort(arr,arr+n);
    int e = arr[d-1]-arr[d-2];
    cout<<e<<endl;
}
return 0;
}