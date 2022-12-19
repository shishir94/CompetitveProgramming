#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x , y;
    cin>>x>>y;
    if((x%2!=0 && y %2!= 0)){
        cout<<"2"<<" ";
        int b = 2^x;
        int c = 2^y;
        if(b>c){
            cout<<c<<" "<<b<<endl;
        }else{
            cout<<b<<" "<<c<<endl;
        }
    }else if((x%2!=0 && y %2 == 0) || (x%2==0 && y %2!=0)){ 
        cout<<"2"<<" ";
        int b,c;
        if(x%2!=0){
             b = 2^x;
            c = b^y;
        }else{
            b = 2^y;
            c = b^x;
        }
        if(b>c){
            cout<<c<<" "<<b<<endl;
        }else{
            cout<<b<<" "<<c<<endl;
        }
    }
}
return 0;
}