#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n < 4){
        cout<<"1"<<endl;
    }else if(n % 4 != 0){
        int d = n/4+1;
        cout<<d<<endl;
    }else{
        cout<<n/4<<endl;
    }
}
return 0;
}