#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    while(cin>>a>>b){
        double c = (a)/(3.14 *(b/2 * b/2));
        double d = (3.14 *(b/2 * b/2));
        cout<<"ALTURA = "<<fixed<<setprecision(2)<<c<<endl;
        cout<<"AREA = "<<fixed<<setprecision(2)<<d<<endl;
    }
    return 0;
}