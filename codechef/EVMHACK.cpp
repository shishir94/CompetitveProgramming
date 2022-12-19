#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i = 0;i<a;i++){
        int ar1[3],ar2[3];
        int ans = INT_MIN;
        int d ;
        int sum = 0;
        int sum1 =0;
        for(int i = 0;i<3;i++){
            cin>>ar1[i];
            sum1 = sum1 + ar1[i];
        }
        for(int i = 0;i<3;i++){
            cin>>ar2[i];
            sum = sum + ar2[i];
        }
        for(int i = 0;i<3;i++){
            d = ar2[i] - ar1[i];
            if(d > ans){
                ans = d;
            }
        }
        sum1 = sum1 + ans;
        if(sum1 > sum/2.0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }   
    return 0;
}