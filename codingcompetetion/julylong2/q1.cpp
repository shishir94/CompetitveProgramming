#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a , b , n;
    cin>>a>>b>>n;
    if(a == b){
        cout<<"-1"<<endl;

    }else if(a % b == 0){
        cout<<"-1"<<endl;
    }else{
        if(n % a == 0){
            int x = n /a;
            if(n % b != 0){
                cout<<n<<endl;
            }else if((n+a) % b != 0){
                cout<<n+a<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            int x = n /a;
            int e = a*(x+1);
            if( e % b != 0){
                cout<<e<<endl;
            }else if((e+a)% b != 0){
                cout<<a*(x+2)<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }
    }
}
return 0;
}