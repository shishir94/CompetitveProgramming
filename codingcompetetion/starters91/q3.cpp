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
    long long a,b;
    cin>>a>>b;
    if(2*b>a){
        cout<<"NO"<<endl;
    }else{
        if(a%2 !=0){
            long long d = (a+1)/2;
            if(d %2 ==0){
                if(b%2 ==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(b%2 ==0){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }else{
            long long x = a/2;
            if(x%2 ==0){
                if(b%2 == 0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(b%2 ==0){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
}
return 0;
}