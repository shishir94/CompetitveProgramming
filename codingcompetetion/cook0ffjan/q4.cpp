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
    sort(arr,arr+n);
    double sum = 0;
    for(int i = 0;i<n-1;i++){
        sum = sum + arr[i];
    }
    sum = sum /(n-1);
    sum = sum + arr[n-1];
    cout<<fixed<<setprecision(6)<<sum<<endl;
}
return 0;
}