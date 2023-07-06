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

long long fun(int n,int x){
    if(n ==2){
        return 1;
    }
    if(n == 3){
        return 3;
    }
    long long ans =0;
    if(n%2 == 0){
        ans = n/2;
        ans = ans*(n-1);
    }else{
        ans = (n-1)/2;
        ans = ans*(n);
    }
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>v(n-2,0);
    v[0] = (n-1)*(n-2)/2;
    for(int i=1;i<n-2;i++){
        v[i] = v[i-1]+(n-i-1)*(n-i-2)/2;
    }
    sort(arr,arr+n);
    for(int i=0;i<q;i++){
        long long x;
        cin>>x;
        long long cnt = lower_bound(v.begin(), v.end(), x) - v.begin();
        cout<<arr[cnt]<<endl;

    }

}
return 0;
}
