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
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    // long long x=0;
    // for(long long i=1;i<=1000000000;i++){
    //     if((a+i)%b==(c+i)%d){
    //         x=i;
    //         break;
    //     }
    // }
    // cout<<x<<endl;
    if((a+1)%b==(c+1)%d){
        cout<<1<<endl;
    }else{
        long long v = gcd(b,d);
        long long ans=0;
        if(b%v==0){
            ans = b/v;
            ans = ans*d;
        }else{
            ans = d/v;
            ans=ans*b;
        }
        cout<<abs(ans-(a%b))<<endl;
    }
}
return 0;
}