#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t; 
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int c= 0;
    while(a != b){
        c++;
        if( a > b){
            a = a/2;
        }else if(b > a){
            b = b/2;
        }
    }
    cout<<c<<endl;
}
return 0;
}