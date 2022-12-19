#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<fixed<<setprecision(1)<<a/double(log(a))<<" "<<fixed<<setprecision(1)<<1.25506*a/double(log(a))<<endl;
    return 0;
}
