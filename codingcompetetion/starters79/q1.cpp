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
    for(int i=1;i<=n/2;i++){
        cout<<i<<" ";
    }
    for(int i=n;i>n/2;i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}