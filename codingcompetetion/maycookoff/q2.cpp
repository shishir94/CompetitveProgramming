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
    int x;
    int d;
    if(n == 2){
        cout<<"3"<<endl;
    }else{
        if(n % 2 == 0){
            x = (n/2)-1;
            x = x*3;
            d = (n-1)*3-x;
        }else{
            x = (n/2);
            x = x*3;
            d = (n-1)*3-x;
        }
        //cout<<x<<endl;
        cout<<d<<endl;
    }
}
return 0;
}