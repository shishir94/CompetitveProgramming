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
    long long n,k;
    cin>>n>>k;
    long long r = k+2+(k-1)/2;
    long long l = (n/r);
    long long p = n%r;
    long long ans = 3*l;
    if(p <= k+1){
        ans++;
    }else{
        ans+=3;
    }
    cout<<ans<<endl;
}
return 0;
}
