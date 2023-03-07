#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    long long x = gcd(a,b);
    long long ans = a-x;
    cout<<ans<<endl;
}
return 0;
}