#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int b,w;
    cin>>b>>w;
    if(abs(b-w) > 1|| b == 0 && w == 0){
        cout<<"-1"<<endl;
    }else{
        if(b>=w){
            for(int i = 0;i<b+w;i++){
                if(i %2 == 0){
                    cout<<"B";
                }else{
                    cout<<"W";
                }
            }
            cout<<endl;
            for(int i = 1;i<b+w;i++){
                cout<<i<<" "<<i+1<<endl;
            }
        }else{
            for(int i = 0;i<b+w;i++){
                if(i %2 == 0){
                    cout<<"W";
                }else{
                    cout<<"B";
                }
            }
            cout<<endl;
            for(int i = 1;i<b+w;i++){
                cout<<i<<" "<<i+1<<endl;
            }
        }
    }
}
return 0;
}