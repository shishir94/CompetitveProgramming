#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int cnt = 0;
     int sum = 0;
    while(true){
        cin>>a;
        if( a < 0){
            break;
        }
        
        if ( a >= 0){
            cnt++;
            sum = sum + a;
        }
        
        
    }
    double avg = (sum)/double(cnt);
    cout<<fixed<<setprecision(2)<<avg<<endl;
    return 0;
}