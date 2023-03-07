#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x<<endl;
    }else{
    long long lcm = (x*y)/gcd(x,y);
    long long ans = (lcm-x-y);
        if(ans>0){
            cout<<ans<<endl;
        }else{
            cout<<ans+max(x,y)<<endl;
        }
    }

}
return 0;
}