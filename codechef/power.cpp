#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
        //bool t = true;
        if(n==1){
            return true;
        }else if(n<=0){
            return false;
        }else if(n%2!=0){
           return false;
        }else{
            return isPowerOfTwo(n/2);
        }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n)<<endl;
}
return 0;
}