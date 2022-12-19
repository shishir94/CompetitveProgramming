#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int x = 0;
        int cnt = 0;
        if(x < b){
            x = x + pow(2,cnt);
            cnt++;
        }
        cnt++;
        x = b + pow(2,cnt);
        cout<<b<<" 0 "<<x<<endl;
    }
    return 0;
}