#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main(){
    int a;
    string b;
    cin>>a;
    for(int i = 0 ; i < a; i++){
        cin>>b;
        int c = b.size();
        cout<<fixed<<setprecision(2)<<c/double(100)<<endl;
    }
    return 0;
}