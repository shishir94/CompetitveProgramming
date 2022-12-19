#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double a = (pow((1+ sqrt(5))/2.0 , n) - (pow ((1- sqrt(5))/2.0 , n)))/ sqrt(5);
    cout<<fixed<<setprecision(1)<<a<<endl;
    return 0;
}
