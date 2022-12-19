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
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>v;
    vector<long long>v1;
    long long cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        if(arr[i]%2==0){
            v.push_back(arr[i]);
        }else{
            v1.push_back(arr[i]);
        }
    }
    sort(v.begin(),v.end(),greater<long long>());
    if(cnt<=v.size()){
        for(int i=0;i<cnt;i++){
            v[i]=v[i]^1;
        }
    }else{
        for(int i=0;i<v.size();i++){
            v[i]=v[i]^1;
        }
    }
    long long m=1;
    for(int i=0;i<v.size();i++){
        m = m*v[i];
        m = m%998244353;
    }
    for(int i=0;i<v1.size();i++){
        m=m*v1[i];
        m=m%998244353;
    }
    m = m%998244353;
    cout<<m<<endl;
}
return 0;
}