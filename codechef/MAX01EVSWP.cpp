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
    string x;
    cin>>x;
    string odd = "";
    string even = "";
    for(int i = 0;i<n;i++){
        if(i % 2 != 0){
            odd = odd + x[i];
        }else{
            even = even + x[i];
        }
    }
    
}   
return 0;
}