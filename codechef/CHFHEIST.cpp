#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){
    long long D , d ,P,Q;
    cin>>D>>d>>P>>Q;
    long long x = D/d;
    long long z = D % d;
    long long ans = 0;
    if(x % 2 == 0){
        ans = x/2;
        ans = ans*(x-1);
    }else{
        ans = (x-1)/2;
        ans = x*ans;
    }
    long long sum = d*(x*P+Q*ans) + z*(P+x*Q);
    cout<<sum<<endl;
}    
return 0;
}