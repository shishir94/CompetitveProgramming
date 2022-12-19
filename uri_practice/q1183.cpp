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
    double sum = 0.0;
    for( int i = 0 ; i < 11 ; i++){
        for( int j = i + 1 ; j < 12 ; j++){
            sum = sum + m[i][j];
        }
    }
    if( b == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if( b == 'M'){
        cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    }
    return 0;
}