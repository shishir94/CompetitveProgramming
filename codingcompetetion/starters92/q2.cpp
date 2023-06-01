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
    int mod = 1000000007;
    long long n,k;
    cin>>n>>k;
    long long ans =1;
    if(k<=n){
        for(int i=1;i<=k;i++){
            ans = ans*i;
            ans=ans%mod;
        }
        ans=ans%mod;
    }else{
        for(int i=k;i>k-n;i--){
            ans = ans*i;
            ans=ans%mod;
        }
        ans=ans%mod;
    }
    cout<<ans<<endl;
}
return 0;
}