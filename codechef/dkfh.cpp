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
    int j = 1;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        cout<<j<<endl;
        sum = sum + j;
        j = (j*10)+1;
       // cout<<j<<" ";
    }
    cout<<sum<<endl;
}
return 0;
}