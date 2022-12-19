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
    long long x = m % (n+l-1);
    if(x > l){
        cout<<"0"<<endl;
    }else{
        cout<<x<<endl;
    }
}
return 0;
}