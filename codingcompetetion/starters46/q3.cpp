#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    long long arr1[n];
    for(int i = 0;i<n;i++){
        arr1[i] = abs(arr[i]-(i+1));
    }
    long long ans = 0;
    for(int i =0;i<n;i++){
        ans = gcd(ans,arr1[i]);
    }
    cout<<ans<<endl;
}
return 0;
}