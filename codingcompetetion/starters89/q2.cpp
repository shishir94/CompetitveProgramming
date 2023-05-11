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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum =0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            sum = sum+(i+1);
        }
    }
    long long ans =1;
    if(n%2==0){
        ans = ans*n/2;
        ans = ans*(n+1);
    }else{
        ans = ans*(n+1)/2;
        ans=ans*n;
    }
    cout<<abs(ans-2*sum)<<endl;
}
return 0;
}