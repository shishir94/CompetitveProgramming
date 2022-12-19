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
    if(n==3){
        cout<<"-1"<<endl;
    }else if(n <= 10){
        for(int i = n;i>=5;i--){
            cout<<i<<" ";
        }
        cout<<"1 "<<"2 "<<"4 "<<"3"<<endl;
    }else{
        for(int i = 10;i>=5;i--){
            cout<<i<<" ";
        }
        cout<<"1 "<<"2 "<<"4 "<<"3 ";
        for(int i =11;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
return 0;
}