#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int f(int x,int y){
    if(x==y){
        return 1;
    }
    if(y>x || x %3 !=0){
        return 0;
    }
    return (f(x/3,y)|| f(2*x/3,y));
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    if(f(x,y)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl; 
    }
    
}
return 0;
}