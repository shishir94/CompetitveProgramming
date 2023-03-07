#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long w,d,h;
    cin>>w>>d>>h;
    long long a,b,f,g;
    cin>>a>>b>>f>>g;
    long long x = abs(b-g)+f+a;
    long long y = abs(a-f)+abs(d-b)+abs(d-g);
    long long z = g+b+abs(a-f);
    long long o = abs(w-a)+abs(w-f)+abs(b-g);
    long long ans = min(x,y);
    long long ans1 = min(z,o);
    long long s = min(ans,ans1);
    cout<<s+h<<endl;
}
return 0;
}