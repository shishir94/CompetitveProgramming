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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long d;
    sort(arr,arr+n);
    long long x = max(abs(arr[0]),abs(arr[n-1]));
  //  cout<<x<<endl;
    if(arr[0]>=0){
      d = arr[0]*arr[0];
    }else if(arr[n-1]>=0){
        d = arr[0]*arr[n-1];
    }else if(arr[n-1]<0){
        d = arr[n-1]*arr[n-1];
    }
    cout<<d<<" "<<x*x<<endl;
}
return 0;
}