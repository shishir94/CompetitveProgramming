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
    long long  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long arr1[n];
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        arr1[i]=sum;
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        long long x = pow(arr1[i],3);
        x = x%998244353;
        ans = ans+x;
        ans = ans%998244353;
    }
    int i=0;int k=1;
    while(i<n-1){
        long long h = (arr1[k]-arr1[i]);
        h=pow(h,3);
        h=h%998244353;
        ans=ans+h;
        ans=ans%998244353;
        k++;
        if(k==n){
            i++;
            k=i+1;
        }
    }
    cout<<(ans%998244353)<<endl;
}
return 0;
}