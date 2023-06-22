#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
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
    int n,m,h;
    cin>>n>>m>>h;
    long long arr[n];
    long long ar1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar1[i];
    }
    sort(arr,arr+n);
    sort(ar1,ar1+m);
    long long ans =0;
    int j=n-1;
    int i=m-1;
    while(i>=0 && j>=0){
        long long e = ar1[i]*h;
        // cout<<e<<" "<<arr[j]<<endl;
        ans += min(e,arr[j]);
        j--;
        i--;
    }
    cout<<ans<<endl;
}
return 0;
}