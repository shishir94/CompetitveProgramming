#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int q;
cin>>q;
for(int ii=1;ii<=q;ii++){
    cout<<"Case #"<<ii<<": ";
    long long x;
    cin>>x;
   // cout<<v<<endl;
    if(x<=4){
        cout<<"1"<<endl;
    }else{
        int cnt = 0;
       for(int i = 0;i<x;i++){
           if(i %5== 0){
               cnt++;
           }
       }
       cout<<cnt<<endl;
    }
}
return 0;
}