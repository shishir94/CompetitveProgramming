#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    for(int i =0 ;i<a;i++){
        cin>>b>>c;
        double d = ( b - sqrt(pow(b,2)-24*c))/12.0;
        double e =  b/4 - 2*d;
        cout<<fixed<<setprecision(2)<<d*e*d<<endl;
    }
    return 0;
}   