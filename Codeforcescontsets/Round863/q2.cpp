#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    x1=x1-1;
    y1=y1-1;
    x2=x2-1;
    y2=y2-1;
    long long x = min(min(x1,n-x1-1),min(y1,n-y1-1));
    long long y = min(min(x2,n-x2-1),min(y2,n-y2-1));
    long long ans = abs(x-y);
    cout<<ans<<endl;
}
return 0;
}