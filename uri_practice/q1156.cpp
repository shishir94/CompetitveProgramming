#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum = 0;
    for ( int i = 0 ; i <= 20 ; i++){
        sum = sum  + (2*i + 1)/double(pow(2,i ));
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}