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
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<"1 ";
        }
        cout<<endl;
    }else{
        if(k==2){
            if(n%2 != 0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                int p = n/2;
                cout<<p<<endl;
                for(int i=0;i<p;i++){
                    cout<<"2 ";
                }
                cout<<endl;
            }
        }else if(k == 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int e = n/3;
            int f = n%3;
            if(f == 1){
                cout<<e+1<<endl;
                for(int i=0;i<e-1;i++){
                    cout<<"3 ";
                }
                cout<<"2 "<<2<<endl;
            }else if(f == 2){
                cout<<e+1<<endl;
                for(int i=0;i<e;i++){
                    cout<<"3 ";
                }
                cout<<"2"<<endl;
            }else{
                cout<<e<<endl;
                for(int i=0;i<e;i++){
                    cout<<"3"<<" ";
                }
                cout<<endl;
            }
        }
    }
}
return 0;
}