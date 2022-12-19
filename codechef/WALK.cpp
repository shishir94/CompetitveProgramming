#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int c[b];
        int ans = INT_MIN;
        for(int i = 0;i<b;i++){
            cin>>c[i];
            if(c[i]+i > ans){
                ans = c[i]+i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}