#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long  n ,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<"Yes"<<endl;
    }else{
        if(k == 0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}
return 0;
}