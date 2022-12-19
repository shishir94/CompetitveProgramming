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
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    sort(arr,arr+n);
    long long m = 0;
    long long sum2 = 0;
    for(int i = 0;i<n;i++){
        sum = sum - arr[i];
        sum2 = sum2 + (1000-arr[i]);
        m = max(m,sum*sum2);
    }
    cout<<m<<endl;
}
return 0;
}