#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string A;
    cin>>A;
    int  x = A.size();
    stack<char>z;
    for(int i =0;i<x;i++){
        z.push(A[i]);
    }
    while(!z.empty()){
        cout<<z.top();
        z.pop();
    }
    cout<<endl;
}
return 0;
}