/*
STRING COMPRESSION

input : string
eg.,    aaabbccccdef
output: a3b2c4def

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int i = 0;
    while(i < n){
        int p = 1;
        while(x[i] == x[i+1]){
            p++;
            i++;
        }
        if(p >1){
        cout<<x[i]<<p;
        }else{
            cout<<x[i];
        }
        i++;
    }
    cout<<endl;
}
return 0;
}