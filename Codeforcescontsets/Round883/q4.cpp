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
void fun(long long n){
    for(long long k=2;k*k<=n;k++){
        long long count = k+1;
        long long p = k;
        while(count <= n){
            p *= k;
            count += p;
            if(count == n){
                cout<<"YES"<<endl;
                return;;
            }
        }
    }
    cout<<"NO"<<endl;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    fun(n);
    
}
return 0;
}