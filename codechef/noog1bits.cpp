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
    int cnt = 0;
    while(n > 0){
        int x = n%2;
        n = n/2;
        if(x==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}