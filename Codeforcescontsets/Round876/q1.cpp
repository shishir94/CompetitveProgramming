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
    int n,k;
    cin>>n>>k;
    int cnt=0;
    set<int>s;
    for(int i=2;i<n;i++){
        int x=0;
        if(i%k ==0){
            x=i/k;
        }else{
            x=i/k+1;
        }
        if(x!=1){
            s.insert(x);
        }
    }
    cout<<s.size()+2<<endl;
}
return 0;
}