#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long ans =1;
    long long x = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(x >= arr[i]){
            x = x^arr[i];
        }else{
            x = max(x,arr[i]);
            ans++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}