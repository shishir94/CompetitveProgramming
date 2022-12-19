#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    vector<int>v;
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
    return v[n];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
}
return 0;
}