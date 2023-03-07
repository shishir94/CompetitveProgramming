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
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            cnt++;
        }
    }
    sort(arr,arr+n);
    long long  ans =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<i+1&&arr[i+1]>=i+2){
            ans++;
        }
    }
    if(cnt==0){
        ans+=2;
    }else{
        ans+=1;
    }
    cout<<ans<<endl;
}
return 0;
}