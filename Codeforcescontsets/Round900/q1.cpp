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
    long long n,k,x;
    cin>>n>>k>>x;

    long long ans = 1;
    long long ans1 = 1;
    long long ans2 = 1;

    long long p = n-k;
    if(k%2 == 0){
        ans = ans*(k/2);
        ans = ans*(k+1);
    }
    else{
        ans = ans*(k+1)/2;
        ans = ans*k;
    }

    if(n%2 == 0){
        ans1 = ans1*(n/2);
        ans1 = ans1*(n+1);
    }
    else{
        ans1 = ans1*(n+1)/2;
        ans1 = ans1*n;
    }

    if(p%2 == 0){
        ans2 = ans2*(p/2);
        ans2 = ans2*(p+1);
    }
    else{
        ans2 = ans2*(p+1)/2;
        ans2 = ans2*p;
    }

    ans1 -= ans2;

    if(x >= ans && x <= ans1){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}