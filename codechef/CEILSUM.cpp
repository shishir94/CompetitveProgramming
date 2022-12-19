#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a ,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
    }else if(a<b){
        cout<<(b-a)/2+1<<endl;
    }else{
        if((b-a)%2!=0){
            cout<<(b-a)/2<<endl;
        }else{
            cout<<(b-a)/2+1<<endl;
        }
    }
}
return 0;
}