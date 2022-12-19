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
    int x;
    int d;
    for(int i = 1;i<=n;i++){
        x = i*i;
        if(x>=n){
            d = i;
            break;
        }
    }
    if(d*d == n){
        cout<<d<<endl;
    }else{
        cout<<d-1<<endl;
    }
}
return 0;
}