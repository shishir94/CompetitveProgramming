#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long l,r;
    cin>>l>>r;
    if(l%2!= 0){
        if(r == l+3){
            cout<<"-1"<<endl;
        }else{
            cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<endl;
        }
    }else{
        cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    }
}
return 0;
}