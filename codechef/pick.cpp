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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int arr1[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        arr1[i] = sum;
    }
    int arr2[n];
    long long sum1 = 0;
    for(int i = 0;i<n;i++){
        sum1 += arr[n-1-i];
        arr2[i] = sum1;
    }
    long long ans = 0;
    for(int i = 0;i<b-1;i++){
        long long sum2 = arr1[i]+arr2[b-2-i];
        //cout<<sum2<<endl;
        if(sum2 >= ans){
            ans = sum2;
        }
    }
    int c = max(arr1[b-1] , arr2[b-1]);
    if(c >= ans){
        cout<<c<<endl;
    }else{
        cout<<ans<<endl;
    }
}
return 0;
}