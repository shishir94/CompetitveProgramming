#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
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
    long long x,y,k;
    cin>>x>>y>>k;

    long long a = (x/k);
    if(x%k) a++;

    long long b = (y/k);
    if(y%k) b++;

    if(b >=a) cout<<2*b<<endl;
    else cout<<2*a-1<<endl;
}
return 0;
}