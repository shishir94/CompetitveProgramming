#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n ,k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long cnt = 0;
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                cnt++;
            }
        }
    }
    long long cnt1 = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i] > arr[j]){
                cnt1++;
            }
        }
    }
    long long ans = cnt*k;
    ans = ans + cnt1*k*(k-1)/2;
    cout<<ans<<endl;
    
}
return 0;
}