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
    for(int i = 1;i<n;i++){
        if(n%i == 0){
            cnt++;
            cout<<i<<endl;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}