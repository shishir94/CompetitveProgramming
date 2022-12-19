#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n , k;
    cin>>n>>k;
    if( (n % 2 == 0 && k % 2 == 0 )||( n % 2 != 0 && k % 2 != 0 )){
        cout<<"Janmansh"<<endl;
    }else{
        cout<<"Jay"<<endl;
    }
}
return 0;
}