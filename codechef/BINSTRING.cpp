#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a , b;
    string c;
    cin>>a;
    while(a--){
        cin>>b;
        cin>>c;
        int d = 1;
        for(int i = 1;i<b;i++){
            if(c[i] != c[i-1]){
                d++;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}