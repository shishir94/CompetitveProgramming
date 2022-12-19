#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x , y;
    cin>>x>>y;
    if(y % x == 0){
        int d = y / x -1;
        cout<<d<<endl;
    }else{
        int d = y / x;
        cout<<d<<endl;
    }
}
return 0;
}