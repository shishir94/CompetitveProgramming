#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    double x = 0.0;
    cin>>a;
    if(a == 0){
        x = 0.0000000000;
    }else{
        for(int i = 0 ; i < a ; i++){
            x = x + 2.0;
            x = 1.0/x;
        }
    }
    x = x + 1.0;
    cout<<fixed<<setprecision(10)<<x<<endl;
    return 0;
}