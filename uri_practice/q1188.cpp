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
    for( int i = 1 ; i < 6 ; i++){
        for( int j =i + 5  ; j > 5 - i ; j--){
            sum = sum + m[6+i][j];
        }
    }
    if( b == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if( b == 'M'){
        cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
    }
    return 0;
}