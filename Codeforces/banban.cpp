#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    cout<<(n+1)/2<<endl;
    long long x=2;
    long long y=3*n;
    while(y>x){
        cout<<x<<" "<<y<<endl;
        x+=3;
        y-=3;
    }
}
return 0;
}