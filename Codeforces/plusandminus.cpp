#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+"<<endl;
    }else{
        cout<<"-"<<endl;

    }
}
return 0;
}