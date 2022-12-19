#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , b;
    cin>>n;
    string a;
    for( int i = 0 ; i < n ; i++){
        cin>>a>>b;
        if( a == "Thor"){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}