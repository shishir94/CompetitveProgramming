#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string x;
    cin>>x;
    bool t = true;
    for(int i = 0;i<n;i++){
        if(x[i] == '0' || x[i] == '5'){
            t = false;
            break;
        }
    }
   // cout<<t<<endl;
    if(t == false){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
return 0;
}