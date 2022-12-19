#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,x;
    cin>>n>>x;
    long long d = (n*10);
    long long e = (x*5);
    if(d>e){
        cout<<"FIRST"<<endl;
    }else if(d <e){
        cout<<"SECOND"<<endl;
    }else{
        cout<<"ANY"<<endl;
    }
}
return 0;
}