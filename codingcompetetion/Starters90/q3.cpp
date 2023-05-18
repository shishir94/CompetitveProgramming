#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long m,n;
    cin>>m>>n;
    long long temp = m;
    while(m%2 ==0){
        m = m/2;
    }
    if(n <= temp && n%m ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}