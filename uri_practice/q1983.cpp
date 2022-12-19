#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b,d;
    double c;
    double ans = INT_MIN;
    cin>>a;
    bool p = true;
    for(int i = 0 ; i < a ; i++){
        cin>>b>>c;   
        if( c >= 8){
            p = false;
            if(ans < c){
                ans = c;
                d = b;
            }
        }
    }
    if(!p){
        cout<<d<<endl;
    }else{
        cout<<"Minimum note not reached"<<endl;
    }
    return 0;
}