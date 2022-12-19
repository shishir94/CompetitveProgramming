#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    double x , y ;
    cin>>n;
    double a;
    for ( int i = 0 ; i < n ; i++){
        cin>>x>>y;
        if ( y == 0){
            cout<<"divisao impossivel"<<endl;
        }else{
            a = ( x)/(y);
            cout<<fixed<<setprecision(1)<<a<<endl;
        }
    }
    return 0;
}