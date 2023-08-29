#include<iostream>
#include<bits/stdc++.h>
// #include<cmath>
using namespace std;


long long modular_power(int x , int y , int p)
{
 
int res = 1;
while(y>0){
if(y%2==1){
res = (res*x)%p;
}
y = y>>1;
x = (x*x)%p;
}
return res%p;
}

bool valid(int mid , int n){
    int val =( mid*(mid-1))/2;
    return val <= n;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long low = 1;
    long long high = 1e10;
    long long ans = 1e12;
    while(low <= high){
        long long mid = (low+high)/2;
        long long tot = (mid*(mid-1))/2;

        if(tot > n){
            high = mid-1;
        }
        else{
            ans = min(ans,mid+n-tot);
            low  = mid+1;
        }
    }
    cout<<ans<<endl;
    // int n;
    // cin>>n;
    // int ans = 0;
    // int i=0;
    // while(n !=0 ){
    //     int bit = n & 1;
    //     ans = (bit*(pow(10,i)))+ans;

    //     n = n >> 1;
    //     i++;
    // }
    // cout<<ans<<endl;
}
return 0;
}