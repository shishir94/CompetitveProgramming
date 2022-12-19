#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(long long n , long long k , long long arr[]){
    for(int i=0;i<n-1;i++){
        if(arr[i]==k){
            return "YES";
        }
    }
    return "NO";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(n,k,arr);
}
return 0;
}