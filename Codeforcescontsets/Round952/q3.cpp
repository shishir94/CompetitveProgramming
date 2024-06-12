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
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int count = 0;
    long long sum = a[0];
    if(a[0] == 0) count++;
    long long ans = a[0];
    vector<long long>pre(n);
    pre[0]= ans;
    for(int i=1;i<n;i++)
    {
        ans = max(ans,a[i]);
        pre[i]= ans;
    }
    for(int i=1;i<n;i++)
    {
        a[i] += a[i-1];
    }

    for(int i=1;i<n;i++)
    {
        long long sum = a[i];
        long long mx = pre[i];

        if(sum-mx == mx) count++;
    }
    cout<<count<<endl;
}
return 0;
}