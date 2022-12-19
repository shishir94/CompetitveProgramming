#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a , b , c;
    cin>>a>>b>>c;
    if(a == b && b == c){
        cout<<"YES"<<endl;
    }else if(a == b){
        if(c > a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(a == c){
        if(b > a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(b == c){
        if(a > b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}