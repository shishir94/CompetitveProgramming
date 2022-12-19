#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        int ans = INT_MAX;
        int sum = 0;
        int e = 0;
        int f = 0;
        for(int i = 0;i<b;i++){
            cin>>d;
            sum = sum + d;
            if(ans>d){
                ans = d;
            }
        }
         e = e+sum/c;
         f = f+sum - e*c;
        if(f>=ans){
            cout<<"-1"<<endl;
        }else{
            cout<<e<<endl;
        }
    }   
    return 0;
}