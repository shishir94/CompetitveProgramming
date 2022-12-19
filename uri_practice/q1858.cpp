#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , a;
    cin>>n;
    int ans = INT_MAX;
    int x;
    for( int i = 0 ; i < n ; i++){
        cin>>a;
        if( ans > a){
            ans = a;
            x = i +1;
        }
    
    }
    cout<<x<<endl;
    return 0;
}