#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n , m,x;
    cin>>n>>m>>x;
    if(m == x){
        cout<<"0"<<endl;
    }else{
        long long d = (n*x)/(x+1);
        cout<<d<<endl;
    }
}
return 0;
}