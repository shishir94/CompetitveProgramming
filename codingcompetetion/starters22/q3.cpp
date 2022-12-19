#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long k;
    cin>>k;
    if(k % 2 != 0){
        cout<<"0"<<endl;
    }else{
        int i = 1;
        while(1){
            long long  x = pow(2,i);
            if(k % x != 0){
                break;
            }
            i++;
        }
        cout<<(i-1)<<endl;
    }
}
return 0;
}