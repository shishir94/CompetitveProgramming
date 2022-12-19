#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum = 0;
    for( int i = 1 ; i <= 100 ; i++){
        sum = sum + ( 1)/double(i);
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}