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
    if(n == 2){
        cout<<"0"<<endl;
    }else{
        if(n%2 != 0 ){
            cout<<(n/2)*(n/2+1)-1<<endl;
        }else if( n % 4 == 0){
            cout<<(n/2-1)*(n/2+1)-1<<endl;
        }else{
            cout<<(n/2-2)*(n/2+2)-1<<endl;
        }
    }
}
return 0;
}