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
    for(int i = 0;i<n;i++){
        if( i % 2 == 0){
            cout<<i+1<<" ";
        }else{
            cout<<2*i<<" ";
        }
    }
    cout<<endl;
}
return 0;
}