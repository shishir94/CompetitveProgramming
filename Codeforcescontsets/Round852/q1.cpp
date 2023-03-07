#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    long long n,m;
    cin>>n>>m;
    if(m>=n){
        cout<<min(n*a,n*b)<<endl;
    }else{
        long long x = a*m;
        long long y = (m+1)*b;
        if(x<=y){
            long long z = n/(m+1);
            long long f = n%(m+1);
            long long ans = m*z*a+f*min(a,b);
            cout<<ans<<endl;
        }else{
            cout<<n*b<<endl;
        }
    }
}
return 0;
}