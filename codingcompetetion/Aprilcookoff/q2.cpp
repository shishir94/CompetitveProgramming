#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(abs(a-b) == 1){
        if((a == 1 && b == 2) || (a == 2&& b == 1) || (a == n-1 && b == n) || (a == n && b == n-1)){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }else if(abs(a-b) == 2){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}