#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    long long c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]+arr[i+1]){
            c++;
        }
    }
    if(k==1){
        cout<<(n-1)/2<<endl;
    }else{
        cout<<c<<endl;
    }
}
return 0;
}