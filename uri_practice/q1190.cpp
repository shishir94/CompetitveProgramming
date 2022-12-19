#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char b;
    cin>>b;
    double m[12][12];
    for( int i = 0 ; i < 12 ; i++){
        for( int j = 0 ; j < 12 ; j++){
            cin>>m[i][j];
        }
    }
    double sum1 = 0.0;
    for( int i = 1 ; i < 6 ; i++){
        for( int j = 11  ; j > 11- i ; j--){
            sum1 = sum1 + m[i][j];
        }
    }
    double sum2 = 0;
    for ( int i = 6 ; i < 11  ; i++){
        for( int j = 11 ; j > i  ; j--){
            sum2 = sum2 + m[i][j];
        }
    }
    double sum = sum1 + sum2 ;
    if( b == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if( b == 'M'){
        cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
    }
    return 0;
}