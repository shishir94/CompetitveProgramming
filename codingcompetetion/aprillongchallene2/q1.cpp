#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int d = (n*10)/100;
    if(d >= 100){
        cout<<d<<endl;
    }else{
        cout<<"100"<<endl;
    }
}
return 0;
}