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
    long long n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int a1[n];
    for(int i=0;i<n;i++){
        a1[i]=2*a[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({a1[i],i});

    }
    sort(v.begin(),v.end());
    sort(b,b+n);
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[v[i].second]=b[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
return 0;
}