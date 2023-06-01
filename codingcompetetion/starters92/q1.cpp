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
    int n,k,l;
    cin>>n>>k>>l;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==l){
            v.push_back(make_pair(x,y));
        }
    }
    sort(v.rbegin(),v.rend());
    if(v.size()<k){
        cout<<"-1"<<endl;
    }else{
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i].first;
        }
        cout<<sum<<endl;
    }
}
return 0;
}