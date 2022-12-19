#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , c;
    cin>>a;
    double arr[5] = {1.50,2.50,3.50,4.50,5.50};
    double sum = 0.0;
    for(int i = 0 ; i < a ;i++){
        cin>>b>>c;
        sum = sum + arr[(b%1000)-1]*c;
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}