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
    if(n == 2){
        cout<<"-1"<<endl;
    }else if(n % 2 == 0){
    for(int i = n;i>= 4;i--){
        cout<<i<<" ";
    }
    cout<<"1"<<" 3"<<" 2"<<endl;
    }else{
        for(int i = 1;i<= n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
return 0;
}