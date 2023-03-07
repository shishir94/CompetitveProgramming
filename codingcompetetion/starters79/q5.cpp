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
    long long l=1;
    long long h = 2000000000;
    while(l<h){
        long long mid = l+(h-1)/2;
        long long cb = cbrt(mid*mid);
        while(cb*cb*cb<=mid*mid){
            cb++;
        }
        while(cb*cb*cb>mid*mid){
            cb--;
        }
        if(mid-cb>=n){
            h=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l*l<<endl;
}
return 0;
}