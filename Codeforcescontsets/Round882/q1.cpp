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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long>v;
    for(int i=0;i<n-1;i++){
        long long x = abs(arr[i]-arr[i+1]);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long ans =0;
    for(int i=0;i<v.size()-m+1;i++){
        ans += v[i];
    }
    cout<<ans<<endl;

}
return 0;
}