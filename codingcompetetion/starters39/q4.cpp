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
    string a;
    cin>>a;
    int cnt = 0;
    for(int i = 0;i<n/2;i++){
        if(a[i] != a[n-i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}