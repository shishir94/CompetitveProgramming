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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    /*
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
    //cout<<endl;
    long long sum = 0;
    long long cnt = 0;
    for(int i = n-1;i>=0;i=i-2){
        sum = sum + arr[i];
        cnt++;
        if(cnt == k){
            break;
        }
    }
    //cout<<sum<<endl;
    long long sum1 = 0;
    long long cnt1 = 0;
    long long  d = 0;
    for(int i = n-2;i>=0;i=i-2){
        sum1 = sum1 + arr[i];
        cnt1++;
       // cout<<sum1<<endl;
        if(cnt1 == k){
            d = i;
            break;
        }
    }
   // cout<<sum1<<endl;
    //cout<<d<<endl;
    long long  f = arr[d-1];
    //cout<<sum1<<endl;
    long long g = sum1 + f;
   // cout<<f<<endl;
   // cout<<sum<<" "<<g<<endl;
    cout<<max(sum,g)<<endl;
}
return 0;
}