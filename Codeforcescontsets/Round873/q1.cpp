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
    if(n%2 !=0){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }else{
        for(int i=1;i<=n;i++){
            cout<<2*i<<" ";
        }
        cout<<endl;
    }
}
return 0;
}