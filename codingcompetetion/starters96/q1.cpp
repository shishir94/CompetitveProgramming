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
    long long n,m;
    cin>>n>>m;
    long long arr[m];
    long long sum=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long sum2 =1;
    if(n%2 == 0){
        sum2 = sum2*(n/2);
        sum2 = sum2*(n+1);
    }else{
        sum2 = sum2*(n+1)/2;
        sum2 = sum2*n;
    }
    long long ans = (sum2-sum);
    cout<<ans<<endl;
    
}
return 0;
}