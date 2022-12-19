#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    long long d = 50*x;
    long long e = (20*d)/100;
    long long f = (30*d)/100;
    long long sum = 2*e+f;
    long long ans = abs(d-sum);
    cout<<ans<<endl;
}
return 0;
}