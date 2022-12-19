#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a , b, n;
    cin>>a>>b>>n;
    if(a==b){
        cout<<"0"<<endl;
    }else{
        int x = a^b;
        int d = log2(x);
        if(x<n){
            cout<<"1"<<endl;
        }else if(n > pow(2,d)){
            cout<<"2"<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
return 0;
}