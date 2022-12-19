#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x , y,z;
    cin>>x>>y>>z;
    if(y <= x){
        cout<<"PIZZA"<<endl;
    }else if(y > x && z <= x){
        cout<<"BURGER"<<endl;
    }else{
        cout<<"NOTHING"<<endl;
    }
}
return 0;
}