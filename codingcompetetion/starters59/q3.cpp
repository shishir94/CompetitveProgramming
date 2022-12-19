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
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
 //   int n = A.size();
    long long ans = INT_MIN;
   // int ans = INT_MIN;
   long long sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(ans < sum){
            ans = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    long long m;
    cin>>m;
    long long arr1[m];
    for(int i = 0;i<m;i++){
        cin>>arr1[i];
    }
    long long sum1 = 0;
    for(int i = 0;i<m;i++){
        if(arr1[i]>0){
            sum1 += arr1[i];
        }
    }
    cout<<(ans+sum1)<<endl;
}
return 0;
}