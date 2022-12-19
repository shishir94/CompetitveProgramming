#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    long long s = abs(x-y);
    cout<<s<<endl;   
}
return 0;
}