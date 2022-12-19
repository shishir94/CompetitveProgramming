#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x = c/a;
    double y = d/b;
    if(x > y){
        cout<<"1"<<endl;
    }else if(x < y){
        cout<<"-1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}