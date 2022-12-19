#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,l,m;
    cin>>n>>m>>l;
    long long y = n+l-1;
    if(y ==0 || n == 0){
        cout<<m<<endl;
    }else{
        long long x = m % y;
        if(x >= l){
            cout<<"0"<<endl;
        }else{
            cout<<x<<endl;
        }
    }    
}
return 0;
}