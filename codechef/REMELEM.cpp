#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){
    long long n , k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    if(n == 1){
        cout<<"YES"<<endl;
    }else{
        sort(arr , arr+n);
        long long ans = arr[0]+arr[n-1];
        if(ans <= k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}