#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    int d = gcd(a,b);
    if(a == 1 || b == 1){
        cout<<"-1"<<endl;
    }else if(d > 1){
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
    }
}
return 0;
}