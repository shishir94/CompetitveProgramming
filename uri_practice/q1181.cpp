#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    char b;
    cin>>a>>b;
    double m[12][12];
    for( int i = 0 ; i < 12 ; i++){
        for( int j = 0 ; j < 12 ; j++){
            cin>>m[i][j];
        }
    }
    double sum = 0.0;
    for ( int i = 0 ; i < 12 ; i++){
        sum = sum + m[a][i];
    }
    if( b == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if( b == 'M'){
        cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
    }
    return 0;
}