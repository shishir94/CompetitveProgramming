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

    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int>pre(n),suf(n);
    int mi = 1e6,mx = -1e6;

    for(int i=0;i<n;i++){
        mi = min(mi,a[i]);
        if(mi == a[i]) pre[i]=1;
        else pre[i]=0;
    }

    for(int i=n-1;i>=0;i--){
        mx = max(mx,a[i]);
        if(mx == a[i]) suf[i]=1;
        else suf[i]=0;
    }
    for(int i=0;i<n;i++){
        if(pre[i] == 1 && suf[i] == 1) cout<<1;
        else cout<<0;
    }
    cout<<endl;
}
return 0;
}