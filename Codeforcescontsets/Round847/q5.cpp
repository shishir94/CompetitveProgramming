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
    if(n%2!=0){
        cout<<"-1"<<endl;
    }else{
        int a = n+n/2;
        int b = n/2;
        if((a^b)!=n){
            cout<<"-1"<<endl;
        }else{
            cout<<a<<" "<<b<<endl;
        }

    }
}
return 0;
}