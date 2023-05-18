#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
long long factorial[100002];

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

long long inverse(long long n, long long mod){
    return modular_power(n,mod-2,mod);
}

long long fun(long long n, long long temp, long long mod){
    long long x = factorial[n]*inverse(factorial[temp],mod)%mod;
    long long y = inverse(factorial[n-temp],mod)%mod;
    return (x*y)%mod;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
factorial[0]=1;
for(int i=1;i<=100000;i++){
    factorial[i]=(factorial[i-1]*i)%mod;
}
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int final =0;
    for(int i=0;i<n;i++){
        long long right = n-i-1;
        long long left = i;
        if(left >= arr[i]-1){
            long long x  = fun(left,arr[i]-1,mod);
            long long y = modular_power(2,right,mod);
            x = (x*y)% mod;
            final = (final+x)%mod;
        }
    }
    cout<<final<<endl;

}
return 0;
}