#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , c;
    while ( true){
        cin>>a;
        if( a == 0){
            break;
        }
        cin>>b>>c;
        int ans = sqrt(( a * b * 100) / double(c));
        cout<<ans<<endl;
    }    
    return 0;
}
