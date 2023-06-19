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

void fun(int a,int b){
    cout<<a<<" "<<"+"<<" "<<b<<" "<<" = "<<a+b<<endl;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a,b,c,k;
    cin>>a>>b>>c>>k;
    bool f = false;
    for(int i=pow(10,a-1);i<pow(10,a);i++){
        int l = max(pow(10, b-1), pow(10, c-1) - i);
        int r = min(pow(10, b)-1, pow(10, c) - 1 - i);
        if(l > r){
            continue;
        }
        int p = r-l+1;
        if(k<=p){
            fun(i,l+k-1);
            f=true;
            break;
        }
        k-=p;
    }
    if(!f){
        cout<<"-1"<<endl;
    }
}
return 0;
}
