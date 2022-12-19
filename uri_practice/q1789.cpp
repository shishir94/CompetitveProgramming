#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , s;
    while(cin>>n){
        int ans = INT_MIN;
        for( int i = 0 ; i < n ; i++){
            cin>>s;
            if( s > ans){
                ans = s;
            }
        }
        if( ans < 10){
            cout<<"1"<<endl;
        }
        if ( ans >= 10 && ans < 20){
            cout<<"2"<<endl;
        } 
        if( ans >= 20){
            cout<<"3"<<endl;
        }
    }
    return 0;
}