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
    for(int i = 1;i<=n;i++){
        arr[i] = 2*i+1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 1;i<=n;i++){
        arr1[i] = 2*i;
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
return 0;
}