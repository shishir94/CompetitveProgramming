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
    int d = n/10;
    int e = n - d * 10;
    int f = e/5;
    int h = e - f*5;
    if(h == 0){
        cout<<d+f<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}