#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
    double c = (b-a)/a*100;
    cout<<fixed<<setprecision(2)<<c<<"%"<<endl;
    return 0;
}