#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
long long q[n];
int mod = 1000000007;
for(int i = 0;i<n;i++){
    cin>>q[i];
}
while(m--){
    long long ci,x;
    cin>>ci>>x;
    long long w[x];
    long long c[x];
    for(int i = 0;i<x;i++){
        cin>>w[i]>>c[i];
    }
    for(int i = 0;i<x;i++){
        q[c[i]-1] = (q[c[i]-1] + ((w[i]*q[ci-1])%mod)) % mod;
        q[c[i]-1]%=mod;
    } 
    q[ci-1] = 0;
}
for(int i = 0;i<n;i++){
    cout<<q[i]<<endl;
}
return 0;
}