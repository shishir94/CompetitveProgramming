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
    cout<<2*(n-m)<<endl;
    vector<int>v;
    for(int i=m+1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=n-1;i>=m;i--){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
return 0;
}