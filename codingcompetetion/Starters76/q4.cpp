#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    if(n%2!=0){
        cout<<"-1"<<endl;
    }else{
        cout<<"1 ";
        for(int i=1;i<n-1;i++){
            if(i%2!=0){
                cout<<"-2 ";
            }else{
                cout<<"2 ";
            }
        }
        cout<<"-1"<<endl;
    }
}
return 0;
}