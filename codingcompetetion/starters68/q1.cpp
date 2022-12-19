#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    long long h = pow(2,m);
    while(n--){
        h = h-h/2;
    }
    cout<<h<<endl;
}
return 0;
}