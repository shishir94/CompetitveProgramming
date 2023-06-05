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
    bool p = false;
    long long a;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            p=true;
            a=arr[i];
            break;
        }
    }
    if(p){
        cout<<a<<endl;
    }else{
        sort(arr,arr+n);
        long long ans = arr[n-1];
        cout<<ans<<endl;
    }
}
return 0;
}