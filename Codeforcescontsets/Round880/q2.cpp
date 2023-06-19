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
    long long n,k,g;
    cin>>n>>k>>g;
    long long total = k*g;
    long long d = total/n;
    int e = ceil(g/2.0);
    if((e-1)*n >= total){
        cout<<total<<endl;
    }else{
        long long p = total - (e-1)*(n-1);
        long long r = p%g;
        if(r >= e){
            p = p +(g-r);
        }else{
            p=p-r;
        }
        long long ans = total - p;
        cout<<ans<<endl;
    }
    
}   
return 0;
}