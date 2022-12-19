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
    if(n % 2 == 0){
        cout<<"1";
        for(int i = 0;i<n-2;i++){
            cout<<"0";
        }
        cout<<"1"<<endl;
    }else{
        for(int i = 0;i<n;i++){
            if(i %2==0){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
    
}
return 0;
}