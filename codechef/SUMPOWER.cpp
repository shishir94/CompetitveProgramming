#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ,k;
    string s;
    cin>>n>>k>>s;
    int arr[n] = {0};
    //int arr[0];
    for(int i = 1;i<n;i++){
        if(s[i] != s[i-1]){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
    for(int i = 1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    long long ans = 0;
    for(int i = 0;i<=k-1;i++){
        ans += arr[i+(n-k)]-arr[i];
    }
    cout<<ans<<endl;
}
return 0;
}