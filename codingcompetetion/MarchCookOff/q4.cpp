#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n ,x;
    cin>>n>>x;
    bool t = true;
    for(int i = 1;i<= n;i++){
        if(x % i == 0){
            long long d = x/i;
            if(d <= n-i+1){
                t = false;
                break;
            }
        }
    }
    if( t == false){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}