#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if((n+2)% 4 == 0){
        cout<<"3"<<endl;
    }else if((n+1)%4 == 0){
        cout<<"3"<<endl;
    }else if((n-1)% 4 == 0){
        cout<<n<<endl;
    }else if(n%4==0){
        long long d = n/4;
        d = 4*d+3;
        cout<<d<<endl;
    }
}
return 0;
}